/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00606954; name: FUN_.text__00606954
 */


void FUN__text__00606954(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  ulong uVar6;
  
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)((long)param_1 + 0x1b) = 4;
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)param_1 = *(undefined1 *)(param_2 + 0x42);
  sVar2 = *(short *)(param_2 + 0xd);
  uVar1 = *(ushort *)(param_2 + 0x22);
  uVar6 = (ulong)uVar1;
  if (sVar2 == 0x400) {
    if (uVar1 != 0) goto LAB__text__006069c4;
    uVar6 = 4;
  }
  else if ((sVar2 != 0x3f9) || (3 < uVar1)) {
LAB__text__006069c4:
    cVar3 = FUN__text__005fe83c(sVar2,uVar6,5);
    cVar4 = FUN__text__005fe954(sVar2,uVar6,5);
    if (cVar3 != '\0') {
      cVar4 = cVar3;
    }
    *(char *)((long)param_1 + 0x19) = cVar4;
    goto LAB__text__00606a18;
  }
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)(uVar6 * 8 + 0x75a422);
  cVar4 = *(char *)(uVar6 * 8 + 0x75a423);
LAB__text__00606a18:
  *(char *)((long)param_1 + 0x1a) = cVar4;
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)(param_2 + 0xbf);
  uVar5 = FUN__text__005ff43c(*(undefined2 *)(param_2 + 0xd),*(undefined2 *)(param_2 + 0x22),5);
  *(undefined2 *)((long)param_1 + 0x3a) = uVar5;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) | 1;
  FUN__text__0062adb0(param_1,param_2);
  return;
}


