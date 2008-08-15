{
	_file0->cd("HcalTPGValidation");
	c1 = new TCanvas();
	c1->SetLogz();

	gStyle->SetOptStat(0);

	alldata_map->Draw("colz");
	c1->Print("alldata_map.png");
	allemul_map->Draw("colz");
	c1->Print("allemul_map.png");
	dataonly_map->Draw("colz");
	c1->Print("dataonly_map.png");
	emulonly_map->Draw("colz");
	c1->Print("emulonly_map.png");
	mismatch_map->Draw("colz");
	c1->Print("mismatch_map.png");

	etcorr_HBHE->Draw("colz");
	c1->Print("etcorr_HBHE.png");
	etcorr_HF->Draw("colz");
	c1->Print("etcorr_HF.png");

	gStyle->SetOptStat(1);
	Int_t max = 0;
	c1->SetLogy();
	// et
	max = alldata_et_HBHE->GetMaximumBin();
	alldata_et_HBHE->GetXaxis()->SetRange(0,max+1);
	alldata_et_HBHE->Draw();
	c1->Print("alldata_et_HBHE.png");

	max = allemul_et_HBHE->GetMaximumBin();
	allemul_et_HBHE->GetXaxis()->SetRange(0,max+1);
	allemul_et_HBHE->Draw();
	c1->Print("allemul_et_HBHE.png");

	max = dataonly_et_HBHE->GetMaximumBin();
	dataonly_et_HBHE->GetXaxis()->SetRange(0,max+1);
	dataonly_et_HBHE->Draw();
	c1->Print("dataonly_et_HBHE.png");

	max = emulonly_et_HBHE->GetMaximumBin();
	emulonly_et_HBHE->GetXaxis()->SetRange(0,max+1);
	emulonly_et_HBHE->Draw();
	c1->Print("emulonly_et_HBHE.png");

	max = alldata_et_HF->GetMaximumBin();
	alldata_et_HF->GetXaxis()->SetRange(0,max+1);
	alldata_et_HF->Draw();
	c1->Print("alldata_et_HF.png");

	max = allemul_et_HF->GetMaximumBin();
	allemul_et_HF->GetXaxis()->SetRange(0,max+1);
	allemul_et_HF->Draw();
	c1->Print("allemul_et_HF.png");

	max = dataonly_et_HF->GetMaximumBin();
	dataonly_et_HF->GetXaxis()->SetRange(0,max+1);
	dataonly_et_HF->Draw();
	c1->Print("dataonly_et_HF.png");

	max = emulonly_et_HF->GetMaximumBin();
	emulonly_et_HF->GetXaxis()->SetRange(0,max+1);
	emulonly_et_HF->Draw();
	c1->Print("emulonly_et_HF.png");
	//---------------------------------------
	
	//FG bit
	data_FG_HF->Draw();
	c1->Print("data_FG_HF.png");
	data_FG_HBHE->Draw();
	c1->Print("data_FG_HBHE.png");
	emul_FG_HF->Draw();
	c1->Print("emul_FG_HF.png");
	emul_FG_HBHE->Draw();
	c1->Print("emul_FG_HBHE.png");

	max = data_FGet_HF->GetMaximumBin();
	data_FGet_HF->GetXaxis()->SetRange(0,max+1);
	data_FGet_HF->Draw();
	c1->Print("data_FGet_HF.png");
	max = data_FGet_HBHE->GetMaximumBin();
	data_FGet_HBHE->GetXaxis()->SetRange(0,max+1);
	data_FGet_HBHE->Draw();
	c1->Print("data_FGet_HBHE.png");
	max = emul_FGet_HF->GetMaximumBin();
	emul_FGet_HF->GetXaxis()->SetRange(0,max+1);
	emul_FGet_HF->Draw();
	c1->Print("emul_FGet_HF.png");
	max = emul_FGet_HBHE->GetMaximumBin();
	emul_FGet_HBHE->GetXaxis()->SetRange(0,max+1);
	emul_FGet_HBHE->Draw();
	c1->Print("emul_FGet_HBHE.png");

	//Error Flags
	errflag_HF->Draw();
	c1->Print("errflag_HF.png");
	errflag_HBHE->Draw();
	c1->Print("errflag_HBHE.png");
}
