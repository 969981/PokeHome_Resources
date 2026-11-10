/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029e3dc; name: FUN_.text__0029e3dc
 */


void FUN__text__0029e3dc(long param_1,byte param_2,undefined8 param_3)

{
  void *__s;
  size_t __n;
  long lVar1;
  void *__dest;
  code *pcVar2;
  undefined1 auVar3 [16];
  long local_c0 [2];
  Md5Impl aMStack_b0 [96];
  
  __s = (void *)(param_1 + 0x68);
  memset(__s,0,0x400000);
  FUN__text__002a1700(*(undefined8 *)(param_1 + 0x60),__s);
  __n = FUN__text__002a1864(0x34);
  lVar1 = FUN__text__002a1890(0x34);
  __dest = (void *)(**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                             (*(long **)(param_1 + 0x50),__n,8);
  memcpy(__dest,__s,__n);
  *(undefined8 *)((long)__dest + lVar1) = 0;
  ((undefined8 *)((long)__dest + lVar1))[1] = 0;
  FUN__text__002a41e4(local_c0);
  FUN__text__002a41f4(local_c0);
  FUN__text__002a4204(local_c0,__dest,__n,0);
  auVar3 = FUN__text__002a4250(local_c0);
  *(undefined1 (*) [16])((long)__s + lVar1) = auVar3;
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),__dest,__n,8);
  nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_b0);
  FUN__text__00240ddc(local_c0,*(undefined8 *)(param_1 + 8),0x732824);
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x58) = local_c0[0];
  pcVar2 = *(code **)(local_c0[0] + 0x378);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(local_c0[0] + 0x380) = 0;
    *(undefined8 *)(local_c0[0] + 0x388) = 0;
    *(undefined8 *)(local_c0[0] + 0x370) = 0;
    *(undefined8 *)(local_c0[0] + 0x378) = 0;
    (*pcVar2)(local_c0[0] + 0x390);
  }
  *(byte *)(local_c0[0] + 0x390) = param_2 & 1;
  *(code **)(local_c0[0] + 0x370) = FUN__text__0029ea74;
  *(undefined **)(local_c0[0] + 0x378) = &DAT__text__0029ef38;
  *(undefined4 *)(local_c0[0] + 0x394) = 0;
  *(long *)(local_c0[0] + 0x398) = param_1;
  *(undefined1 **)(local_c0[0] + 0x380) = &LAB__text__0029f4b4;
  *(undefined1 **)(local_c0[0] + 0x388) = &LAB__text__0029f4c0;
  FUN__text__005e896c(*(undefined8 *)(param_1 + 0x58),param_3,0xffffffff,0x10);
  *(undefined4 *)(param_1 + 0x400090) = 1;
  return;
}


