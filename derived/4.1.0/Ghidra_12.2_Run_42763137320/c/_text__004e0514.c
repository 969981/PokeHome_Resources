/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0514; name: FUN_.text__004e0514
 */


undefined8 *
FUN__text__004e0514(long param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
                   ulong param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  
  if (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN__text__004e1030();
    *(undefined8 **)(param_1 + 8) = puVar5;
    plVar4 = (long *)(**(code **)*puVar5)();
  }
  else {
    plVar4 = (long *)(**(code **)**(undefined8 **)(param_1 + 8))();
  }
  if (plVar4 != (long *)0x0) {
    puVar5 = (undefined8 *)FUN__text__00400f80(0,0x68);
    if (puVar5 != (undefined8 *)0x0) {
      FUN__text__004e0700(puVar5,plVar4);
      *puVar5 = 0xffffffff46464952;
      puVar5[1] = 0x20746d6645564157;
      bVar2 = param_5 != 1;
      *(undefined4 *)(puVar5 + 2) = 0x28;
      uVar1 = (uint)param_6 & 0xff;
      *(short *)((long)puVar5 + 0x16) = (short)uVar1;
      uVar8 = 1;
      if (bVar2) {
        uVar8 = 2;
      }
      iVar3 = uVar1 << (ulong)uVar8;
      *(undefined2 *)((long)puVar5 + 0x14) = 0xfffe;
      *(short *)(puVar5 + 4) = (short)iVar3;
      uVar15 = 0x10;
      if (bVar2) {
        uVar15 = 0x20;
      }
      *(undefined2 *)((long)puVar5 + 0x22) = uVar15;
      *(int *)(puVar5 + 3) = param_3;
      *(int *)((long)puVar5 + 0x1c) = iVar3 * param_3;
      *(undefined4 *)((long)puVar5 + 0x24) = 0x16;
      *(uint *)(puVar5 + 5) = (uint)(param_6 >> 0xc) & 0xfffff;
      uVar10 = 3;
      if (!bVar2) {
        uVar10 = 1;
      }
      *(undefined4 *)((long)puVar5 + 0x2c) = uVar10;
      if ((param_6 & 0xf00) == 0x200) {
        uVar11 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar9 = 0xca;
        uVar14 = 0xc1;
        uVar12 = 200;
        uVar13 = 0x44;
        uVar16 = 0x86;
        uVar17 = 0x11d3;
        uVar15 = 0x721;
      }
      else {
        uVar15 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar9 = 0;
        uVar6 = 0x71;
        uVar7 = 0x9b;
        uVar11 = 0x38;
        uVar14 = 0xaa;
        uVar16 = 0x80;
        uVar17 = 0x10;
      }
      *(undefined1 *)(puVar5 + 7) = uVar9;
      *(undefined2 *)(puVar5 + 6) = uVar15;
      *(undefined2 *)((long)puVar5 + 0x32) = uVar17;
      *(undefined1 *)((long)puVar5 + 0x34) = uVar16;
      *(undefined1 *)((long)puVar5 + 0x35) = uVar13;
      *(undefined1 *)((long)puVar5 + 0x36) = uVar12;
      *(undefined1 *)((long)puVar5 + 0x37) = uVar14;
      *(undefined1 *)((long)puVar5 + 0x39) = uVar11;
      *(undefined1 *)((long)puVar5 + 0x3a) = uVar7;
      *(undefined1 *)((long)puVar5 + 0x3b) = uVar6;
      *(undefined8 *)((long)puVar5 + 0x3c) = 0x61746164;
      iVar3 = (*(code *)**(undefined8 **)puVar5[0xc])((undefined8 *)puVar5[0xc],param_2,puVar5,0x44)
      ;
      if (iVar3 == 1) {
        return puVar5;
      }
      FUN__text__004e0720(puVar5);
      FUN__text__00400fc0(0,puVar5);
    }
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return (undefined8 *)0x0;
}


