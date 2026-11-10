/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002168e4; name: FUN_.text__002168e4
 */


bool FUN__text__002168e4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN__text__002155e0();
  if ((uVar3 & 1) == 0) {
    return false;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = FUN__text__002156dc(param_1);
  iVar2 = FUN__text__00603450(param_2,0xd,uVar4,8,uVar1,1);
  return iVar2 != 0;
}


