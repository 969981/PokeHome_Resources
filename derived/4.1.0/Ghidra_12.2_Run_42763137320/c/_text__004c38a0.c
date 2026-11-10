/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c38a0; name: FUN_.text__004c38a0
 */


void FUN__text__004c38a0(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if (((*(byte *)(param_1 + 0x70) >> 1 & 1) == 0) &&
     (puVar2 = (undefined8 *)FUN__text__00400f80(0,0x18), puVar2 != (undefined8 *)0x0)) {
    uVar3 = *param_2;
    uVar1 = *(undefined4 *)(param_2 + 1);
    puVar2[2] = 0;
    *puVar2 = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar1;
    *(uint *)((long)puVar2 + 0xc) = param_3;
    plVar7 = (long *)(param_1 + 0x68);
    lVar4 = *plVar7;
    if (lVar4 == 0) {
      lVar6 = 0;
LAB__text__004c3934:
      plVar5 = (long *)(param_1 + 0x60);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0x10);
      }
      *plVar7 = (long)puVar2;
    }
    else {
      if (param_3 < *(uint *)(lVar4 + 0xc)) {
        lVar6 = 0;
      }
      else {
        do {
          lVar6 = lVar4;
          lVar4 = *(long *)(lVar6 + 0x10);
          if (lVar4 == 0) goto LAB__text__004c3934;
        } while (*(uint *)(lVar4 + 0xc) <= param_3);
      }
      puVar2[2] = lVar4;
      plVar5 = plVar7;
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0x10);
      }
    }
    *plVar5 = (long)puVar2;
  }
  return;
}


