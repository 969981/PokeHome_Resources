/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d3230; name: FUN_.text__003d3230
 */


undefined8 FUN__text__003d3230(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_40 [2];
  undefined1 auStack_30 [16];
  
  local_40[0] = 0x8c756c9d7ebc8081;
  FUN__text__001554a0(auStack_30,param_1 + 0x160,local_40);
  uVar1 = FUN__text__001553ac(auStack_30);
  if ((ulong)(long)param_2 < uVar1) {
    uVar2 = FUN__text__00155418(local_40,auStack_30,(long)param_2);
    uVar2 = FUN__text__003d32b8(uVar2,local_40);
    return uVar2;
  }
  return 0xff000000;
}


