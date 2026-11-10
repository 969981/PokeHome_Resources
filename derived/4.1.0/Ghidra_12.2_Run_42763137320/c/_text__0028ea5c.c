/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028ea5c; name: FUN_.text__0028ea5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028ea5c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long local_28;
  
  FUN__text__001281fc();
  lVar1 = _DAT_008a21a0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = 0;
  lVar2 = param_1[1];
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *param_1 = lVar1 + 0x10;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0xff] = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[9] = lVar1 + 0xb8;
  param_1[10] = lVar1 + 0xf8;
  local_60 = 0xa7649e0ad180b01a;
  uStack_58 = 0x71a942;
  local_50 = 0x1b;
  local_48 = 0;
  FUN__text__00115650(&local_28,*(undefined8 *)(param_2 + 0xb0),&local_60,0xb);
  lVar1 = *(long *)(local_28 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    if (local_28 == 0) goto LAB__text__0028ebec;
  }
  (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  local_28 = 0;
LAB__text__0028ebec:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_64 = 0x200;
  local_50 = _DAT_00730ee8;
  local_60 = _DAT_00730ed8;
  uStack_58 = _DAT_00730ee0;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xda] != 0) {
    (**(code **)(*(long *)(param_1[0xda] + 0x48) + 0x18))();
  }
  param_1[0xda] = local_28;
  FUN__text__005f2d98(lVar1,&local_60);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xdd] != 0) {
    (**(code **)(*(long *)(param_1[0xdd] + 0x48) + 0x18))();
  }
  param_1[0xdd] = local_28;
  FUN__text__005f2d98(lVar1,&uStack_58);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xe0] != 0) {
    (**(code **)(*(long *)(param_1[0xe0] + 0x48) + 0x18))();
  }
  param_1[0xe0] = local_28;
  FUN__text__005f2d98(lVar1,&local_50);
  *(undefined4 *)(param_1 + 0xdf) = 1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 2;
  local_64 = 0x200;
  local_50 = _DAT_00730f00;
  local_60 = _DAT_00730ef0;
  uStack_58 = _DAT_00730ef8;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xe3] != 0) {
    (**(code **)(*(long *)(param_1[0xe3] + 0x48) + 0x18))();
  }
  param_1[0xe3] = local_28;
  FUN__text__005f2d98(lVar1,&local_60);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xe6] != 0) {
    (**(code **)(*(long *)(param_1[0xe6] + 0x48) + 0x18))();
  }
  param_1[0xe6] = local_28;
  FUN__text__005f2d98(lVar1,&uStack_58);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xe9] != 0) {
    (**(code **)(*(long *)(param_1[0xe9] + 0x48) + 0x18))();
  }
  param_1[0xe9] = local_28;
  FUN__text__005f2d98(lVar1,&local_50);
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 2;
  *(undefined4 *)(param_1 + 0xeb) = 1;
  param_1[0xe7] = 0x717dec;
  local_64 = 0x200;
  local_60 = _DAT_00724e90;
  uStack_58 = _DAT_00724e98;
  local_50 = _DAT_00724ea0;
  local_48 = _DAT_00724ea8;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xec] != 0) {
    (**(code **)(*(long *)(param_1[0xec] + 0x48) + 0x18))();
  }
  param_1[0xec] = local_28;
  FUN__text__005f2d98(lVar1,&local_60);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xef] != 0) {
    (**(code **)(*(long *)(param_1[0xef] + 0x48) + 0x18))();
  }
  param_1[0xef] = local_28;
  FUN__text__005f2d98(lVar1,&uStack_58);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xf2] != 0) {
    (**(code **)(*(long *)(param_1[0xf2] + 0x48) + 0x18))();
  }
  param_1[0xf2] = local_28;
  FUN__text__005f2d98(lVar1,&local_50);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xf5] != 0) {
    (**(code **)(*(long *)(param_1[0xf5] + 0x48) + 0x18))();
  }
  param_1[0xf5] = local_28;
  FUN__text__005f2d98(lVar1,&local_48);
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xf0] = 0x714699;
  param_1[0xf3] = 0x715edd;
  param_1[0xf6] = 0x711bd6;
  *(undefined4 *)(param_1 + 0xf1) = 1;
  *(undefined4 *)(param_1 + 0xf4) = 2;
  *(undefined4 *)(param_1 + 0xf7) = 3;
  local_64 = 0x200;
  local_60 = _DAT_00730f08;
  uStack_58 = _DAT_00730f10;
  local_50 = _DAT_00730f18;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xf8] != 0) {
    (**(code **)(*(long *)(param_1[0xf8] + 0x48) + 0x18))();
  }
  param_1[0xf8] = local_28;
  FUN__text__005f2d98(lVar1,&local_60);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xfb] != 0) {
    (**(code **)(*(long *)(param_1[0xfb] + 0x48) + 0x18))();
  }
  param_1[0xfb] = local_28;
  FUN__text__005f2d98(lVar1,&uStack_58);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0xfe] != 0) {
    (**(code **)(*(long *)(param_1[0xfe] + 0x48) + 0x18))();
  }
  param_1[0xfe] = local_28;
  FUN__text__005f2d98(lVar1,&local_50);
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined4 *)(param_1 + 0xfd) = 1;
  *(undefined4 *)(param_1 + 0x100) = 2;
  param_1[0xfc] = 0x71a113;
  param_1[0xff] = 0x70dba3;
  local_64 = 0x200;
  local_60 = _DAT_007250f0;
  uStack_58 = _DAT_007250f8;
  local_50 = _DAT_00725100;
  local_48 = _DAT_00725108;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0x101] != 0) {
    (**(code **)(*(long *)(param_1[0x101] + 0x48) + 0x18))();
  }
  param_1[0x101] = local_28;
  FUN__text__005f2d98(lVar1,&local_60);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0x104] != 0) {
    (**(code **)(*(long *)(param_1[0x104] + 0x48) + 0x18))();
  }
  param_1[0x104] = local_28;
  FUN__text__005f2d98(lVar1,&uStack_58);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0x107] != 0) {
    (**(code **)(*(long *)(param_1[0x107] + 0x48) + 0x18))();
  }
  param_1[0x107] = local_28;
  FUN__text__005f2d98(lVar1,&local_50);
  local_64 = 0x200;
  FUN__text__00111970(&local_28,lVar2,&local_64);
  if (param_1[0x10a] != 0) {
    (**(code **)(*(long *)(param_1[0x10a] + 0x48) + 0x18))();
  }
  param_1[0x10a] = local_28;
  FUN__text__005f2d98(lVar1,&local_48);
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0x108] = 0x70e4a2;
  *(undefined4 *)(param_1 + 0x106) = 1;
  *(undefined4 *)(param_1 + 0x109) = 2;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


