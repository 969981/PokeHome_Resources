/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00527af0; name: FUN_.text__00527af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00527af0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  void *__dest;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long local_60;
  undefined8 local_58;
  ulong local_50;
  ulong uStack_48;
  
  uVar7 = *(ulong *)(param_3 + 0x70);
  uVar9 = *(ulong *)(param_4 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x90);
  uVar12 = uVar7;
  if (uVar9 <= uVar7) {
    uVar12 = uVar9;
  }
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  local_50 = uVar12;
  uStack_48 = uVar7;
  if (uVar3 != 0) {
    lVar10 = *(long *)(param_1 + 0x88);
    iVar11 = 0;
    do {
      iVar1 = iVar11 + (uVar3 >> 1);
      puVar8 = *(ulong **)(lVar10 + (long)iVar1 * 8);
      uVar9 = *puVar8;
      if (uVar9 == uVar12 && puVar8[1] == uVar7) {
        plVar4 = (long *)(lVar10 + (long)iVar1 * 8);
        goto LAB__text__00527bec;
      }
      bVar2 = puVar8[1] < uVar7;
      if (uVar9 != uVar12) {
        bVar2 = uVar9 < uVar12;
      }
      uVar6 = uVar3 - bVar2;
      if (bVar2 != 0) {
        iVar11 = iVar1 + 1;
      }
      uVar3 = uVar6 >> 1;
    } while (1 < uVar6);
  }
  plVar4 = (long *)FUN__text__005297f0((long *)(param_1 + 0x88),uVar12,uVar7,&local_58);
  uVar3 = 0;
  if (plVar4 != (long *)0x0) {
    puVar8 = (ulong *)FUN__text__00400f80(0xb,0x68);
    if (puVar8 == (ulong *)0x0) {
      *plVar4 = 0;
      uVar6 = *(uint *)(param_1 + 0x90);
      uVar12 = (long)plVar4 - *(long *)(param_1 + 0x88);
      uVar3 = (uint)(uVar12 >> 3);
      if (uVar3 + 1 < uVar6) {
        __dest = (void *)(*(long *)(param_1 + 0x88) + (uVar12 & 0x7fffffff8));
        memmove(__dest,(void *)((long)__dest + 8),(ulong)((uVar6 + ~uVar3) * 8));
        uVar6 = *(uint *)(param_1 + 0x90);
      }
      uVar3 = 0;
      *(uint *)(param_1 + 0x90) = uVar6 - 1;
    }
    else {
      *puVar8 = uVar12;
      puVar8[1] = uVar7;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      uVar12 = _DAT_008a4030 + 0x10;
      *(undefined4 *)(puVar8 + 0xc) = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[2] = uVar12;
      puVar8[3] = 0;
      *plVar4 = (long)puVar8;
LAB__text__00527bec:
      uVar5 = FUN__text__005228a0(param_3,param_1);
      local_58 = *(undefined8 *)(param_1 + 0x78);
      local_60 = *plVar4 + 0x10;
      uVar3 = FUN__text__00527c98(puVar8 + 10,param_2,uVar5,&local_50,&local_58,&local_60);
    }
  }
  return uVar3 & 1;
}


