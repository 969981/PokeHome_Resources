/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602c60; name: FUN_.text__00602c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00602c60(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 local_a08;
  uint uStack_a04;
  uint local_a00;
  undefined4 uStack_9fc;
  undefined1 auStack_9f8 [4];
  undefined4 uStack_9f4;
  void *local_9f0;
  undefined8 local_40;
  random_device rStack_31;
  
  uStack_9f4._1_1_ = 0;
  stack0xfffffffffffff609 = 0x6d6f646e;
  local_a00 = CONCAT31((int3)_DAT_0071bb95,0x18);
  uStack_9fc = (undefined4)((ulong)_DAT_0071bb95 >> 0x18);
  auStack_9f8[0] = (undefined1)((ulong)_DAT_0071bb95 >> 0x38);
  std::random_device::random_device(&rStack_31,(string *)&local_a00);
  if ((local_a00 & 1) != 0) {
    operator_delete(local_9f0);
  }
  local_a00 = std::random_device::operator()(&rStack_31);
  lVar7 = -0x26e;
  iVar4 = 1;
  lVar8 = (ulong)((local_a00 ^ local_a00 >> 0x1e) * 0x6c078965) + 1;
  uStack_9fc = (undefined4)lVar8;
  piVar5 = (int *)auStack_9f8;
  do {
    iVar1 = iVar4 + 1;
    iVar4 = iVar4 + 2;
    iVar3 = ((uint)lVar8 ^ (uint)lVar8 >> 0x1e) * 0x6c078965;
    iVar6 = (int)lVar7;
    uVar2 = iVar3 + iVar1;
    lVar7 = lVar7 + 2;
    *piVar5 = iVar6 + iVar3 + 0x270;
    lVar8 = lVar7 + (ulong)((uVar2 ^ uVar2 >> 0x1e) * 0x6c078965) + 0x26f;
    piVar5[1] = (int)lVar8;
    piVar5 = piVar5 + 2;
  } while (lVar7 != 0);
  uStack_a04 = param_1 & 0xff;
  local_40 = 0;
  local_a08 = 0;
  iVar4 = std::uniform_int_distribution<int>::operator()
                    ((uniform_int_distribution<int> *)&local_a08,
                     (mersenne_twister_engine *)&local_a00,(param_type *)&local_a08);
  std::random_device::~random_device(&rStack_31);
  return iVar4;
}


