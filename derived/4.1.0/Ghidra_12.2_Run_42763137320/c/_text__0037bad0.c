/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037bad0; name: FUN_.text__0037bad0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037bad0(undefined8 *param_1,long param_2)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 8) == '\0') {
    local_40 = _DAT_00735440;
    uStack_38 = _DAT_00735448;
    local_30 = _DAT_00735450;
    uStack_28 = _DAT_00735458;
    local_60 = _DAT_00735420;
    uStack_58 = _DAT_00735428;
    local_50 = _DAT_00735430;
    uStack_48 = _DAT_00735438;
    nn::crypto::detail::Sha256Impl::Update((void *)(param_2 + 0x10),(ulong)&local_60);
    *(undefined1 *)(param_2 + 8) = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  nn::crypto::detail::Sha256Impl::GetHash((void *)(param_2 + 0x10),(ulong)param_1);
  return;
}


