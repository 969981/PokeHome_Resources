/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205f40; name: FUN_.text__00205f40
 */


undefined4 FUN__text__00205f40(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar2 = FUN__text__00631588(param_1,0);
  iVar3 = FUN__text__00631588(param_1,1);
  iVar4 = FUN__text__00631588(param_1,2);
  iVar5 = FUN__text__00631588(param_1,3);
  iVar6 = FUN__text__00631588(param_1,4);
  iVar7 = FUN__text__00631588(param_1,5);
  uVar8 = 0;
  uVar1 = iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2;
  if (0x5a < (int)uVar1) {
    if (0x78 < uVar1) {
      uVar8 = 2;
      if (0x96 < uVar1) {
        uVar8 = 3;
      }
      return uVar8;
    }
    uVar8 = 1;
  }
  return uVar8;
}


