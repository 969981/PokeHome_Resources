/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029e2bc; name: FUN_.text__0029e2bc
 */


bool FUN__text__0029e2bc(long param_1,void *param_2,size_t param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int *__dest;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_c0 [16];
  Md5Impl aMStack_b0 [96];
  undefined8 local_50;
  undefined8 uStack_48;
  
  __dest = (int *)(**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                            (*(long **)(param_1 + 0x50),param_3,8);
  memcpy(__dest,param_2,param_3);
  iVar2 = *__dest;
  if (param_4 != 0) {
    *(bool *)param_4 = iVar2 < 0x34;
  }
  lVar5 = FUN__text__002a1890(iVar2);
  lVar6 = FUN__text__002a1864(iVar2);
  bVar4 = false;
  if (lVar6 != 0) {
    puVar1 = (undefined8 *)((long)__dest + lVar5);
    local_50 = *puVar1;
    uStack_48 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN__text__002a41e4(auStack_c0);
    FUN__text__002a41f4(auStack_c0);
    FUN__text__002a4204(auStack_c0,__dest,lVar6,0);
    auVar7 = FUN__text__002a4250(auStack_c0);
    auVar3._8_8_ = uStack_48;
    auVar3._0_8_ = local_50;
    bVar4 = auVar7 == auVar3;
    nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_b0);
  }
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),__dest,param_3,8);
  return bVar4;
}


