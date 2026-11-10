/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c4fa4; name: FUN_.text__002c4fa4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c4fa4(undefined8 *param_1)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  nn::crypto::detail::Sha256Impl::Initialize();
  local_40 = _DAT_007334e8;
  uStack_38 = _DAT_007334f0;
  local_30 = _DAT_007334f8;
  uStack_28 = _DAT_00733500;
  local_60 = _DAT_007334c8;
  uStack_58 = _DAT_007334d0;
  local_50 = _DAT_007334d8;
  uStack_48 = _DAT_007334e0;
  nn::crypto::detail::Sha256Impl::Update(param_1 + 2,(ulong)&local_60);
  return;
}


