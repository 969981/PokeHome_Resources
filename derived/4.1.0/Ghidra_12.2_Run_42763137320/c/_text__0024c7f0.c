/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024c7f0; name: FUN_.text__0024c7f0
 */


uint FUN__text__0024c7f0(char *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ShowWebPageArg aSStack_2020 [8192];
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  nn::web::ShowWebPageArg::ShowWebPageArg(aSStack_2020,param_1);
  bVar1 = SUB81(aSStack_2020,0);
  nn::web::ShowWebPageArg::SetJsExtensionEnabled(bVar1);
  nn::web::ShowWebPageArg::SetFooterFixedKind(aSStack_2020,DAT_008aa4f8);
  nn::web::ShowWebPageArg::SetPointerEnabled(bVar1);
  nn::web::ShowWebPageArg::SetLeftStickMode(aSStack_2020,DAT_008aa500);
  nn::web::ShowWebPageArg::SetPageCacheEnabled(bVar1);
  do {
    iVar2 = nn::web::ShowWebPage((WebPageReturnValue *)&DAT_008e2478,aSStack_2020);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = nn::web::WebPageReturnValue::GetWebExitReason();
  } while (iVar2 == 2);
  uVar3 = nn::nifm::IsNetworkAvailable();
  return uVar3 & 1;
}


