/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d0480; name: FUN_.text__004d0480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__004d0480(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 <= uVar8) {
    iVar5 = uVar1 + (uVar1 >> 1);
    if (uVar1 == 0) {
      iVar5 = 1;
    }
    uVar6 = FUN__text__004d8b50(param_1 + 0x10,iVar5);
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)(param_1 + 0x1c) <= uVar8) {
      return (undefined8 *)0x0;
    }
    uVar8 = *(uint *)(param_1 + 0x18);
  }
  *(uint *)(param_1 + 0x18) = uVar8 + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    return (undefined8 *)0x0;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 0x30);
  *puVar7 = 0;
  puVar7[1] = 0x2b00000000;
  *(undefined4 *)(puVar7 + 2) = 0;
  puVar7[3] = 0;
  *(undefined1 *)(puVar7 + 4) = 0;
  *(undefined4 *)((long)puVar7 + 0x24) = 0;
  puVar4 = _DAT_008a4940;
  puVar7[5] = 0;
  do {
    uVar6 = *puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  iVar5 = FUN__text__004d05a8(puVar7,uVar6 + 1 & 0xffffffffffffff,param_2,*_DAT_008a4b70,param_3);
  if (iVar5 != 1) {
    FUN__text__004d3ca8(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x30 + -0x30)
    ;
    puVar7 = (undefined8 *)0x0;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return puVar7;
}


