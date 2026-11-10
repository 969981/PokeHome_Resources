/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004355b0; name: FUN_.text__004355b0
 */


void FUN__text__004355b0(undefined4 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_48;
  undefined1 local_44 [4];
  
  lVar1 = param_2 + (param_3 & 0xffffffff) * 0x10;
  local_60 = 0;
  local_58 = 0;
  puVar8 = (uint *)(lVar1 + 0x58);
  if (*puVar8 != 0) {
    plVar9 = (long *)(lVar1 + 0x50);
    puVar10 = (ulong *)*plVar9;
    do {
      uVar5 = *puVar10;
      uVar6 = uVar5 >> 0x20 & 0xff;
      plVar7 = (long *)(param_2 + uVar6 * 0x18);
      uVar2 = *(uint *)(plVar7 + 1);
      if (uVar2 == 0) {
LAB__text__00435660:
        plVar7 = (long *)FUN__text__00434fac(param_2,uVar5 & 0xffffff0000000000 |
                                                     uVar5 & 0xffffffff | uVar6 << 0x20);
        if (plVar7 != (long *)0x0) goto LAB__text__00435670;
      }
      else {
        uVar3 = 0;
        uVar4 = (uint)uVar5;
        if (uVar2 != 0) {
          uVar3 = uVar4 / uVar2;
        }
        plVar7 = (long *)(*plVar7 + (ulong)(uVar4 - uVar3 * uVar2) * 8);
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB__text__00435660;
        } while (*(uint *)(plVar7 + 1) != uVar4);
LAB__text__00435670:
        if (*(long *)((long)plVar7 + 0x20) == 0) {
          local_44[0] = 0;
          local_48 = param_1;
          FUN__text__004363b0(plVar7,param_4,&local_48,local_44,&local_60,1,0);
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != (ulong *)(*plVar9 + (ulong)*puVar8 * 8));
  }
  return;
}


