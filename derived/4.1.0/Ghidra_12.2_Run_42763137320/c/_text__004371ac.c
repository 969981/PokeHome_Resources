/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004371ac; name: FUN_.text__004371ac
 */


undefined8 FUN__text__004371ac(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ushort *local_18;
  
  if ((param_4 & 1) == 0) goto LAB__text__00437240;
  local_18 = (ushort *)0x0;
  puVar1 = (ushort *)FUN__text__00438ef0(param_1 + 0x40,param_2,&local_18,0);
  if (puVar1 == (ushort *)0x0) {
    lVar3 = 0;
    if (local_18 != (ushort *)0x0) goto LAB__text__00437200;
LAB__text__00437224:
    lVar4 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28) + (ulong)*puVar1 * 0x28;
    if (local_18 == (ushort *)0x0) goto LAB__text__00437224;
LAB__text__00437200:
    lVar4 = *(long *)(param_1 + 0x28) + (ulong)*local_18 * 0x28;
  }
  if (lVar3 == 0) {
    return 2;
  }
  uVar2 = FUN__text__00437084(param_1,param_2,lVar3,lVar4,param_3);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
LAB__text__00437240:
  uVar2 = FUN__text__004394b0(param_1 + 0x40,param_1 + 0x28,param_2);
  if ((uVar2 & 1) == 0) {
    return 2;
  }
  if ((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x50) == 0)) {
    FUN__text__00436aa0(param_1 + 0x28);
  }
  return 1;
}


