/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022039c; name: FUN_.text__0022039c
 */


void FUN__text__0022039c(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  char *__s;
  size_t __n;
  long *plVar4;
  undefined4 uVar5;
  void *pvVar6;
  ulong local_78;
  ulong local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  FUN__text__00332990();
  iVar2 = FUN__text__0032f710();
  FUN__text__0022194c(*(undefined8 *)(param_1 + 0x1e8),iVar2 / 0x3c,iVar2 % 0x3c);
  __s = (char *)FUN__text__0032f2c0();
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00144380(&local_78);
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    pvVar6 = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB__text__00220444;
  }
  else {
    pvVar6 = operator_new((__n | 0xf) + 1);
    local_78 = (__n | 0xf) + 2;
    local_70 = __n;
    local_68 = pvVar6;
LAB__text__00220444:
    memmove(pvVar6,__s,__n);
  }
  *(undefined1 *)((long)pvVar6 + __n) = 0;
  uVar1 = local_78 >> 1 & 0x7f;
  if ((local_78 & 1) != 0) {
    uVar1 = local_70;
  }
  if (((4 < uVar1) && (std::string::insert((ulong)&local_78,(char *)0x4), 8 < uVar1)) &&
     (std::string::insert((ulong)&local_78,(char *)0x9), 0xc < uVar1)) {
    std::string::insert((ulong)&local_78,(char *)0xe);
  }
  pvVar6 = (void *)((ulong)&local_78 | 1);
  if ((local_78 & 1) != 0) {
    pvVar6 = local_68;
  }
  FUN__text__00221f40(*(undefined8 *)(param_1 + 0x1e8),pvVar6);
  iVar3 = FUN__text__0032f6f0();
  if ((iVar3 == 1) || (iVar3 = FUN__text__0032f6f0(), iVar3 == 4)) {
    local_60 = 0xb3bef4a80c51a974;
    uStack_58 = 0x7193dd;
    local_50 = 0x1b;
    local_48 = 0;
    FUN__text__003c1e4c(&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    local_60 = *(undefined8 *)(param_1 + 0x198);
    local_50 = CONCAT35(local_50._5_3_,0x100000000);
    uStack_58 = 1;
    local_50 = CONCAT44(local_50._4_4_,0x1000100);
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x640) + 0x60);
    (**(code **)(*plVar4 + 8))(plVar4,0);
    FUN__text__00131da0(*(undefined8 *)(param_1 + 0xf0),&local_60);
    FUN__text__00128ec0(*(undefined8 *)(param_1 + 0xf0),0);
    uVar5 = 6;
  }
  else {
    if (0 < iVar2) goto LAB__text__00220588;
    local_50 = CONCAT35(local_50._5_3_,0x100000000);
    local_60 = *(undefined8 *)(param_1 + 0x1a8);
    uStack_58 = 0;
    local_50 = CONCAT44(local_50._4_4_,0x1000100);
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x640) + 0x60);
    (**(code **)(*plVar4 + 8))(plVar4,1);
    FUN__text__00131da0(*(undefined8 *)(param_1 + 0xf0),&local_60);
    FUN__text__00128ec0(*(undefined8 *)(param_1 + 0xf0),0);
    FUN__text__00221f40(*(undefined8 *)(param_1 + 0x1e8),0x70f683);
    uVar5 = 7;
  }
  *(undefined4 *)(param_1 + 0x1f0) = uVar5;
LAB__text__00220588:
  if ((local_78 & 1) == 0) {
    return;
  }
  operator_delete(local_68);
  return;
}


