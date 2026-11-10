/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00135fe0; name: FUN_.text__00135fe0
 */


uint FUN__text__00135fe0(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_18;
  
  if (param_2 - 1U < 3) {
    local_18 = *(undefined8 *)((long)(int)(param_2 - 1U) * 8 + 0x7219d8);
    lVar2 = *(long *)(param_1 + 0x2d0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x2d0);
    local_18 = 0xd5a646e9eb5de80c;
  }
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN__text__003c7ec0(lVar2,&local_18);
  return (uVar1 ^ 1) & 1;
}


