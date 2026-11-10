/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dc520; name: FUN_.text__001dc520
 */


void FUN__text__001dc520(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [100];
  int local_b4 [25];
  
  piVar1 = (int *)(param_1 + 0x8b3c);
  FUN__text__0019c35c(auStack_118);
  local_17c = *piVar1;
  local_138 = param_2[8];
  uStack_130 = param_2[9];
  local_128 = param_2[10];
  uStack_120 = param_2[0xb];
  local_158 = param_2[4];
  uStack_150 = param_2[5];
  local_148 = param_2[6];
  uStack_140 = param_2[7];
  local_178 = *param_2;
  uStack_170 = param_2[1];
  local_168 = param_2[2];
  uStack_160 = param_2[3];
  uVar7 = FUN__text__0019c518(&local_17c,auStack_118);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN__text__0019c1d8((undefined8 *)(param_1 + 0x8b40),param_2);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x138);
        puVar2 = (undefined8 *)(param_1 + 0x89c8);
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        uVar3 = *param_2;
        uVar4 = param_2[1];
        uVar5 = param_2[3];
        *(undefined8 *)(param_1 + 0x8b50) = param_2[2];
        *(undefined8 *)(param_1 + 0x8b58) = uVar5;
        *(undefined8 *)(param_1 + 0x8b40) = uVar3;
        *(undefined8 *)(param_1 + 0x8b48) = uVar4;
        uVar3 = param_2[4];
        uVar4 = param_2[5];
        uVar5 = param_2[7];
        *(undefined8 *)(param_1 + 0x8b70) = param_2[6];
        *(undefined8 *)(param_1 + 0x8b78) = uVar5;
        *(undefined8 *)(param_1 + 0x8b60) = uVar3;
        *(undefined8 *)(param_1 + 0x8b68) = uVar4;
        uVar3 = param_2[8];
        uVar4 = param_2[9];
        uVar5 = param_2[0xb];
        *(undefined8 *)(param_1 + 0x8b90) = param_2[10];
        *(undefined8 *)(param_1 + 0x8b98) = uVar5;
        *(undefined8 *)(param_1 + 0x8b80) = uVar3;
        *(undefined8 *)(param_1 + 0x8b88) = uVar4;
        FUN__text__0019cd08(lVar9,piVar1,*(undefined1 *)(param_1 + 0x8ba3));
        *(undefined2 *)(param_1 + 0x8ba2) = 0;
        *(undefined1 *)(param_1 + 0x89f8) = 0;
        *(undefined1 *)(param_1 + 0x8ba0) = 1;
        if (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe8) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x89d0) + 0xe8) = 0;
        }
        FUN__text__003b17ec(*puVar2,0,0);
        FUN__text__003b17f8(*puVar2,0);
        FUN__text__003ad2d0(*puVar2,0);
        FUN__text__001d7830(*(undefined8 *)(param_1 + 0x38),*piVar1);
        FUN__text__0019c35c(local_b4);
        FUN__text__001d91d8(*(undefined8 *)(param_1 + 0x40),*piVar1 != local_b4[0]);
        FUN__text__001db72c(param_1);
        FUN__text__001d9160(*(undefined8 *)(param_1 + 0x40),0);
        if (((*(long *)(param_1 + 0x18) != 0) &&
            (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x718), lVar8 != 0)) &&
           (*(long *)(lVar8 + 0x168) != 0)) {
          iVar6 = FUN__text__001c693c();
          FUN__text__001d911c(*(undefined8 *)(param_1 + 0x40),iVar6 != 0);
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
  }
  else {
    FUN__text__001dc250(param_1);
  }
  return;
}


