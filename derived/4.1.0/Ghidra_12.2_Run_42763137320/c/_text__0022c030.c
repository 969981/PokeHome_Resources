/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022c030; name: FUN_.text__0022c030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0022c030(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  undefined2 uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  ushort uVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  long lVar21;
  
  puVar20 = (undefined8 *)FUN__text__00327790();
  uVar12 = *(undefined2 *)((long)puVar20 + 0x46);
  bVar6 = *(byte *)((long)puVar20 + 0x4c);
  cVar7 = *(char *)(puVar20 + 0xd);
  uVar3 = *(undefined4 *)((long)puVar20 + 0x6c);
  uVar13 = *(ushort *)(puVar20 + 0xe);
  uVar19 = *(undefined4 *)(puVar20 + 1);
  uVar1 = *(undefined4 *)(puVar20 + 2);
  uVar2 = *(undefined4 *)((long)puVar20 + 0x14);
  uVar14 = *(ushort *)(puVar20 + 3);
  uVar15 = *(undefined2 *)((long)puVar20 + 0x72);
  bVar8 = *(byte *)(puVar20 + 0xf);
  uVar16 = *(undefined2 *)((long)puVar20 + 0x1a);
  bVar9 = *(byte *)(puVar20 + 4);
  cVar10 = *(char *)((long)puVar20 + 0x94);
  cVar11 = *(char *)((long)puVar20 + 0x3c);
  uVar4 = *(undefined4 *)(puVar20 + 8);
  uVar17 = *(ushort *)((long)puVar20 + 0x44);
  uVar5 = *(undefined4 *)(puVar20 + 0x13);
  *(undefined8 *)(param_1 + 8) = *puVar20;
  plVar18 = _DAT_0089f4f0;
  *(undefined4 *)(param_1 + 0x10) = uVar19;
  lVar21 = *(long *)(*plVar18 + 0x80);
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  uVar19 = FUN__text__00112ed0(lVar21);
  *(undefined4 *)(param_1 + 0x14) = uVar19;
  (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(uint *)(param_1 + 0x20) = (uint)uVar14;
  *(undefined2 *)(param_1 + 0x24) = uVar16;
  *(bool *)(param_1 + 0x2c) = cVar11 != '\0';
  *(uint *)(param_1 + 0x28) = (uint)bVar9;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(uint *)(param_1 + 0x3c) = (uint)uVar17;
  *(undefined2 *)(param_1 + 0x40) = uVar12;
  *(uint *)(param_1 + 0x44) = (uint)bVar6;
  *(bool *)(param_1 + 0x48) = cVar7 != '\0';
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(uint *)(param_1 + 0x58) = (uint)uVar13;
  *(undefined2 *)(param_1 + 0x5c) = uVar15;
  *(uint *)(param_1 + 0x60) = (uint)bVar8;
  *(bool *)(param_1 + 100) = cVar10 != '\0';
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  return;
}


