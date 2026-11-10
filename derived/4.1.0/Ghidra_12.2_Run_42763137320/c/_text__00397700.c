/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00397700; name: FUN_.text__00397700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00397700(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  Sha256Impl aSStack_118 [120];
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == *(long *)(param_1 + 0x10)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      plVar1 = (long *)(lVar7 + 0x18);
      lVar7 = lVar7 + 0x20;
      lVar8 = lVar8 + *plVar1 + 4;
    } while (lVar7 != *(long *)(param_1 + 0x10));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  lVar7 = lVar8 + 0x20;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,lVar7,8);
  if (lVar5 == 0) {
    bVar3 = false;
  }
  else {
    local_68 = 0x73a601;
    uStack_60 = 0x7f;
    local_70 = 0;
    local_58 = 0;
    lStack_88 = _DAT_008a3288 + 0x10;
    local_a0 = _DAT_008a33e0 + 0x10;
    local_90 = 0;
    lStack_98 = _DAT_008a33c8 + 0x10;
    local_80 = lVar5;
    lStack_78 = lVar8;
    uVar6 = FUN__text__003978e0(param_1,&local_a0);
    bVar3 = false;
    if ((uVar6 & 1) != 0) {
      FUN__text__003a1314(auStack_128);
      FUN__text__003a1324(auStack_128);
      FUN__text__003a1390(auStack_128,lVar5,lVar8,0);
      FUN__text__003a13dc(&local_148,auStack_128);
      puVar2 = (undefined8 *)(lVar5 + lVar8);
      puVar2[2] = local_138;
      puVar2[3] = uStack_130;
      *puVar2 = local_148;
      puVar2[1] = uStack_140;
      local_38 = 0;
      iVar4 = FUN__text__00214dfc(&local_38,param_3,lVar7,0);
      if (iVar4 == 0) {
        iVar4 = FUN__text__005dc198(local_38,lVar5,lVar7);
        bVar3 = iVar4 == 0;
      }
      else {
        bVar3 = false;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_118);
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar5,lVar7,8);
  }
  return bVar3;
}


