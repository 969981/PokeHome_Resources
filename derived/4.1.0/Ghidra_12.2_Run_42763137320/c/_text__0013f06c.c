/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013f06c; name: FUN_.text__0013f06c
 */


undefined8 FUN__text__0013f06c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_8;
  
  lVar1 = *param_1 + 0x110;
  FUN__text__0012c300(lVar1,0x70ac84);
  uVar2 = FUN__text__0012c2c4(lVar1);
  if ((uVar2 & 1) != 0) {
    local_8 = 0x431e769ffc1ad350;
    uVar3 = FUN__text__0012ce7c(lVar1,&local_8);
    FUN__text__003a14e8(uVar3,1);
  }
  return 1;
}


