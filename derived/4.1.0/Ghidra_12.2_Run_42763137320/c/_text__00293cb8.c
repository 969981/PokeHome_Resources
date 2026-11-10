/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00293cb8; name: FUN_.text__00293cb8
 */


void FUN__text__00293cb8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_18;
  
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + 0x870) = 0xb38227c4772f21b5;
  lVar1 = lVar3 + 0x110;
  FUN__text__0012bca0(lVar1,0);
  local_18 = 0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar2,0);
  local_18 = 0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar2,0);
  *(undefined1 *)(lVar3 + 0x868) = 1;
  return;
}


