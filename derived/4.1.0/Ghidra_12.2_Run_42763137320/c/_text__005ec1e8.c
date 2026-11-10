/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ec1e8; name: FUN_.text__005ec1e8
 */


void FUN__text__005ec1e8(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar1 = param_3[8];
  uVar6 = param_3[9];
  uVar11 = param_3[10];
  uVar2 = param_3[4];
  uVar7 = param_3[5];
  uVar3 = param_3[6];
  uVar8 = param_3[7];
  uVar4 = *param_3;
  uVar9 = param_3[1];
  uVar5 = param_3[2];
  uVar10 = param_3[3];
  lVar12 = *(long *)(param_1 + 0x78);
  *(undefined1 *)(lVar12 + (ulong)param_2 + 0x8c8) = 1;
  lVar12 = lVar12 + (ulong)param_2 * 0x58;
  *(undefined8 *)(lVar12 + 0x918) = uVar8;
  *(undefined8 *)(lVar12 + 0x910) = uVar3;
  *(undefined8 *)(lVar12 + 0x920) = uVar1;
  *(undefined8 *)(lVar12 + 0x928) = uVar6;
  *(undefined8 *)(lVar12 + 0x930) = uVar11;
  *(undefined8 *)(lVar12 + 0x8f8) = uVar10;
  *(undefined8 *)(lVar12 + 0x8f0) = uVar5;
  *(undefined8 *)(lVar12 + 0x900) = uVar2;
  *(undefined8 *)(lVar12 + 0x908) = uVar7;
  *(undefined8 *)(lVar12 + 0x8e0) = uVar4;
  *(undefined8 *)(lVar12 + 0x8e8) = uVar9;
  *(undefined1 **)(lVar12 + 0x8e0) = &LAB__text__006d73e0;
  return;
}


