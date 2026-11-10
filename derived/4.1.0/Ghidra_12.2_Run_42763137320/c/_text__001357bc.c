/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001357bc; name: FUN_.text__001357bc
 */


void FUN__text__001357bc(long param_1,undefined4 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  long lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_88 [11];
  
  lVar1 = param_1 + 0x110;
  FUN__text__0012bca0(lVar1,0);
  local_88[0] = 0x431e769ffc1ad350;
  uVar3 = FUN__text__0012ce7c(lVar1,local_88);
  FUN__text__003a14e8(uVar3,0);
  local_110 = FUN__text__00135bbc;
  local_108 = FUN__text__00135c28;
  local_100 = &LAB__text__00135c2c;
  uStack_e4 = (undefined4)local_88[0];
  local_f8 = &LAB__text__00135c38;
  lStack_f0 = param_1;
  local_e8 = param_2;
  FUN__text__0012c3b0(lVar1,0x713a0f,&local_110);
  pcVar2 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar2)(&lStack_f0);
  }
  return;
}


