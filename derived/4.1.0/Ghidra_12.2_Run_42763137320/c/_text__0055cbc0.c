/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055cbc0; name: FUN_.text__0055cbc0
 */


int FUN__text__0055cbc0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(long **)(param_1 + 0x10) = param_2;
  bVar3 = *(byte *)(param_5 + 1);
  *(uint *)(param_1 + 0x104) = (uint)bVar3;
  *(undefined4 *)(param_1 + 0x108) = *param_5;
  iVar4 = FUN__text__0055d280(param_1 + 0x20,param_2,bVar3,3);
  if (iVar4 == 1) {
    iVar4 = FUN__text__0055d280(param_1 + 0x30,param_2,*(undefined4 *)(param_1 + 0x104),3);
    if (iVar4 == 1) {
      lVar5 = (**(code **)(*param_2 + 0x10))
                        (param_2,(ulong)*(uint *)(param_1 + 0x104) * 0xc,0x70e70d,0x57);
      *(long *)(param_1 + 0x18) = lVar5;
      if (lVar5 == 0) {
        return 0x34;
      }
      if (*(int *)(param_1 + 0x104) != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar5);
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
          lVar2 = *(long *)(param_1 + 0x18) + lVar5;
          lVar5 = lVar5 + 0xc;
          fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
          *(float *)(lVar2 + 8) = -251.32742 / fVar7 + 1.0;
        } while (uVar6 < *(uint *)(param_1 + 0x104));
      }
      FUN__text__0055ca1c(*(undefined8 *)(param_1 + 8),param_1 + 0x70);
      FUN__text__0055cd30(param_1,param_1 + 0x70);
      iVar4 = 1;
      FUN__text__0055e72c(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0),
                          param_1 + 0x40,*(undefined4 *)(param_1 + 0xe8),1);
      FUN__text__0055f1e0(*(undefined4 *)(param_1 + 0xf4),param_1 + 0x5c,1);
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xfc);
    }
  }
  return iVar4;
}


