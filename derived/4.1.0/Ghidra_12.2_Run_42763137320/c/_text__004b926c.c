/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b926c; name: FUN_.text__004b926c
 */


void FUN__text__004b926c(long param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(long *)(param_1 + 0x110) = param_3;
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  if (param_3 != 0) {
    FUN__text__00445c40(param_3);
    lVar5 = *(long *)(param_1 + 0x110);
    puVar2 = *(undefined8 **)(lVar5 + 0x80);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN__text__00400f80(0,0x18);
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      *puVar2 = *(undefined8 *)(lVar5 + 0x80);
      *(undefined8 **)(lVar5 + 0x80) = puVar2;
      puVar4 = *(undefined8 **)(lVar5 + 0x78);
    }
    else {
      puVar4 = *(undefined8 **)(lVar5 + 0x78);
    }
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined8 **)(lVar5 + 0x70) = puVar2;
    }
    else {
      *puVar4 = puVar2;
      puVar2 = *(undefined8 **)(lVar5 + 0x80);
    }
    *(undefined8 **)(lVar5 + 0x78) = puVar2;
    *(undefined8 *)(lVar5 + 0x80) = *puVar2;
    *puVar2 = 0;
    *(int *)(lVar5 + 0x94) = *(int *)(lVar5 + 0x94) + 1;
    lVar5 = *(long *)(lVar5 + 0x78);
    *(undefined4 *)(lVar5 + 8) = param_2;
    *(long *)(lVar5 + 0x10) = param_1;
  }
  return;
}


