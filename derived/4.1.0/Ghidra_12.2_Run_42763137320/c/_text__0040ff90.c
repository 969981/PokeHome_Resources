/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040ff90; name: FUN_.text__0040ff90
 */


undefined4 FUN__text__0040ff90(long param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined1 uStack_61;
  
  uVar7 = param_3 & 0xffffffff;
  FUN__text__00411c2c(&uStack_61);
  uVar8 = 0x1f;
  if ((param_2 != (code *)0x0) && (uVar7 >> 0xd == 0)) {
    if ((int)param_3 == 0) {
      uVar8 = 1;
    }
    else if ((param_3 & 1) == 0) {
      uVar8 = 1;
      while (puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0x20), puVar3 != (undefined8 *)0x0) {
        uVar6 = (uint)uVar7;
        uVar2 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        *puVar3 = 0x887228;
        puVar3[1] = param_2;
        lVar4 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
        piVar5 = (int *)(param_1 + lVar4 * 0x18);
        puVar3[2] = param_4;
        puVar3[3] = 0;
        plVar1 = (long *)(piVar5 + 4);
        if (*(long *)(piVar5 + 4) != 0) {
          plVar1 = (long *)(*(long *)(piVar5 + 2) + 0x18);
        }
        *plVar1 = (long)puVar3;
        *(undefined8 **)(piVar5 + 2) = puVar3;
        *piVar5 = *piVar5 + 1;
        if ((puVar3 == (undefined8 *)0x0) ||
           (uVar6 = uVar6 & (1 << (ulong)((uint)lVar4 & 0x1f) ^ 0xffffffffU), uVar7 = (ulong)uVar6,
           uVar6 == 0)) goto LAB__text__00410100;
      }
      uVar8 = 0x34;
    }
    else {
      uVar8 = 1;
      while (puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0x20), puVar3 != (undefined8 *)0x0) {
        uVar6 = (uint)uVar7;
        uVar2 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        *puVar3 = 0x887228;
        puVar3[1] = param_2;
        lVar4 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
        piVar5 = (int *)(param_1 + lVar4 * 0x18);
        puVar3[2] = param_4;
        puVar3[3] = 0;
        plVar1 = (long *)(piVar5 + 4);
        if (*(long *)(piVar5 + 4) != 0) {
          plVar1 = (long *)(*(long *)(piVar5 + 2) + 0x18);
        }
        *plVar1 = (long)puVar3;
        *(undefined8 **)(piVar5 + 2) = puVar3;
        *piVar5 = *piVar5 + 1;
        (*param_2)(puVar3,1,param_4);
        if ((puVar3 == (undefined8 *)0x0) ||
           (uVar6 = uVar6 & (1 << (ulong)((uint)lVar4 & 0x1f) ^ 0xffffffffU), uVar7 = (ulong)uVar6,
           uVar6 == 0)) goto LAB__text__00410100;
      }
      uVar8 = 0x34;
    }
  }
LAB__text__00410100:
  FUN__text__00411c70(&uStack_61);
  return uVar8;
}


