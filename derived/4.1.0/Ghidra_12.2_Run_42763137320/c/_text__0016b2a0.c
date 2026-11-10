/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016b2a0; name: FUN_.text__0016b2a0
 */


undefined8 FUN__text__0016b2a0(long *param_1)

{
  code *pcVar1;
  int iVar2;
  ProfanityFilter *this;
  
  DAT_008e1d60 = param_1;
  DAT_008e1d68 = (**(code **)(*param_1 + 0x10))(param_1,0x20000,0x1000);
  if (DAT_008e1d70 == (ProfanityFilter *)0x0) {
    this = (ProfanityFilter *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
    nn::ngc::ProfanityFilter::ProfanityFilter(this);
    DAT_008e1d70 = this;
    iVar2 = nn::ngc::ProfanityFilter::Initialize(this,DAT_008e1d68);
  }
  else {
    iVar2 = nn::ngc::ProfanityFilter::Initialize(DAT_008e1d70,DAT_008e1d68);
  }
  if (iVar2 != 0) {
    nn::result::detail::OnUnhandledResult(iVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x16b35c);
    (*pcVar1)();
  }
  (**(code **)(*(long *)DAT_008e1d70 + 0x10))();
  return 0;
}


