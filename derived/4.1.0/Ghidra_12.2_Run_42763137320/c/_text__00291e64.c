/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00291e64; name: FUN_.text__00291e64
 */


void FUN__text__00291e64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  lVar1 = param_1 + 0x110;
  *(undefined8 *)(param_1 + 0x870) = 0xe5eb0c6f02bc6728;
  FUN__text__0012bca0(lVar1,0);
  local_18 = 0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar2,0);
  local_18 = 0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar2,0);
  *(undefined1 *)(param_1 + 0x868) = 1;
  return;
}


