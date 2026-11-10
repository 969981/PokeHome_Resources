/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00145064; name: FUN_.text__00145064
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00145064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *local_38;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x238);
  puVar6 = *(undefined8 **)(lVar5 + 0x300);
  if (puVar6 != (undefined8 *)0x0) {
    lVar7 = *(long *)(lVar5 + 0x38);
    lVar4 = FUN__text__006ec5f4(*(undefined8 *)(lVar5 + 0x20));
    uVar1 = puVar6[1];
    local_38 = (undefined8 *)(lVar4 + lVar7);
    *local_38 = *puVar6;
    local_38[1] = uVar1;
    uVar2 = puVar6[5];
    uVar1 = puVar6[2];
    uVar3 = puVar6[3];
    local_38[4] = puVar6[4];
    local_38[5] = uVar2;
    local_38[2] = uVar1;
    local_38[3] = uVar3;
    (**(code **)(*_DAT_0089fc90 + 0x240))(*_DAT_0089fc90 + 0x260,&local_38);
    lVar5 = *(long *)(lVar5 + 0x20);
    FUN__text__006ec60c(lVar5,0,*(undefined8 *)(lVar5 + 0x48));
    FUN__text__006ec608(lVar5);
    FUN__text__006d73f0(param_1);
  }
  return puVar6 != (undefined8 *)0x0;
}


