/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00166670; name: FUN_.text__00166670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00166670(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  lVar4 = *_DAT_0089f700;
  *(long **)(lVar4 + 0x10) = param_2;
  *(undefined8 *)(lVar4 + 0x20) = 0x400000;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x400000,8);
  *(long *)(lVar4 + 0x18) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x10) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x18);
  }
  FUN__text__005f6b94(lVar2,lVar2 + 0xa8,0x3fff58,0);
  *(long *)(lVar4 + 8) = lVar2;
  *(long *)(param_1 + 0x1840) = lVar2;
  local_80 = 0x25cb3746f1af731d;
  uStack_78 = 0x714490;
  local_70 = 0x17;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1860) != 0) && (*(long *)(param_1 + 0x1848) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1848) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined8 *)(param_1 + 0x1850) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1858) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1860) = 0;
  if (*(long *)(param_1 + 0x1868) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1868) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1868) = lVar2;
  *(undefined8 *)(param_1 + 0x1850) = local_58;
  *(undefined8 *)(param_1 + 0x1858) = local_50;
  *(long *)(param_1 + 0x1860) = local_48;
  *(undefined4 *)(param_1 + 0x1870) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1848) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1848) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1848) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xaeb2cd473ebfd2f6;
  uStack_78 = 0x70c2bd;
  local_70 = 0x17;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1890) != 0) && (*(long *)(param_1 + 0x1878) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1878) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1878) = 0;
  *(undefined8 *)(param_1 + 0x1880) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1888) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1890) = 0;
  if (*(long *)(param_1 + 0x1898) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1898) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1898) = lVar2;
  *(undefined8 *)(param_1 + 0x1880) = local_58;
  *(undefined8 *)(param_1 + 0x1888) = local_50;
  *(long *)(param_1 + 0x1890) = local_48;
  *(undefined4 *)(param_1 + 0x18a0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1878) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1878) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1878) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xcd0b4f2f4640640f;
  uStack_78 = 0x70ed46;
  local_70 = 0x17;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x18c0) != 0) && (*(long *)(param_1 + 0x18a8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18a8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x18b8) = 0x70f683;
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  if (*(long *)(param_1 + 0x18c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18c8) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x18c8) = lVar2;
  *(undefined8 *)(param_1 + 0x18b0) = local_58;
  *(undefined8 *)(param_1 + 0x18b8) = local_50;
  *(long *)(param_1 + 0x18c0) = local_48;
  *(undefined4 *)(param_1 + 0x18d0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x18a8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18a8) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x18a8) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x4342d52ef870715c;
  uStack_78 = 0x713054;
  local_70 = 0x17;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x18f0) != 0) && (*(long *)(param_1 + 0x18d8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18d8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x18d8) = 0;
  *(undefined8 *)(param_1 + 0x18e0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x18e8) = 0x70f683;
  *(undefined8 *)(param_1 + 0x18f0) = 0;
  if (*(long *)(param_1 + 0x18f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18f8) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x18f8) = lVar2;
  *(undefined8 *)(param_1 + 0x18e0) = local_58;
  *(undefined8 *)(param_1 + 0x18e8) = local_50;
  *(long *)(param_1 + 0x18f0) = local_48;
  *(undefined4 *)(param_1 + 0x1900) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x18d8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18d8) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x18d8) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x1d6021ebfcbdd9ae;
  uStack_78 = 0x720c77;
  local_70 = 0x17;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1920) != 0) && (*(long *)(param_1 + 0x1908) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1908) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1908) = 0;
  *(undefined8 *)(param_1 + 0x1910) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1918) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1920) = 0;
  if (*(long *)(param_1 + 0x1928) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1928) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1928) = lVar2;
  *(undefined8 *)(param_1 + 0x1910) = local_58;
  *(undefined8 *)(param_1 + 0x1918) = local_50;
  *(long *)(param_1 + 0x1920) = local_48;
  *(undefined4 *)(param_1 + 0x1930) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1908) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1908) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1908) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x939e7bebaef3bae5;
  uStack_78 = 0x710d9d;
  local_70 = 0x17;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1950) != 0) && (*(long *)(param_1 + 0x1938) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1938) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1938) = 0;
  *(undefined8 *)(param_1 + 0x1940) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1948) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1950) = 0;
  if (*(long *)(param_1 + 0x1958) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1958) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1958) = lVar2;
  *(undefined8 *)(param_1 + 0x1940) = local_58;
  *(undefined8 *)(param_1 + 0x1948) = local_50;
  *(long *)(param_1 + 0x1950) = local_48;
  *(undefined4 *)(param_1 + 0x1960) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1938) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1938) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1938) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x7a05d2d46638504d;
  uStack_78 = 0x71265f;
  local_70 = 0x16;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1980) != 0) && (*(long *)(param_1 + 0x1968) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1968) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1968) = 0;
  *(undefined8 *)(param_1 + 0x1970) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1978) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1980) = 0;
  if (*(long *)(param_1 + 0x1988) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1988) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1988) = lVar2;
  *(undefined8 *)(param_1 + 0x1970) = local_58;
  *(undefined8 *)(param_1 + 0x1978) = local_50;
  *(long *)(param_1 + 0x1980) = local_48;
  *(undefined4 *)(param_1 + 0x1990) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1968) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1968) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1968) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xedbe28d416491126;
  uStack_78 = 0x70b72a;
  local_70 = 0x16;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x19b0) != 0) && (*(long *)(param_1 + 0x1998) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1998) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x19a8) = 0x70f683;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  if (*(long *)(param_1 + 0x19b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x19b8) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x19b8) = lVar2;
  *(undefined8 *)(param_1 + 0x19a0) = local_58;
  *(undefined8 *)(param_1 + 0x19a8) = local_50;
  *(long *)(param_1 + 0x19b0) = local_48;
  *(undefined4 *)(param_1 + 0x19c0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1998) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1998) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1998) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x24c43477b9047422;
  uStack_78 = 0x71b64b;
  local_70 = 0x16;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x19e0) != 0) && (*(long *)(param_1 + 0x19c8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x19c8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x19d8) = 0x70f683;
  *(undefined8 *)(param_1 + 0x19e0) = 0;
  if (*(long *)(param_1 + 0x19e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x19e8) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x19e8) = lVar2;
  *(undefined8 *)(param_1 + 0x19d0) = local_58;
  *(undefined8 *)(param_1 + 0x19d8) = local_50;
  *(long *)(param_1 + 0x19e0) = local_48;
  *(undefined4 *)(param_1 + 0x19f0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x19c8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x19c8) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x19c8) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xada4de78060ed749;
  uStack_78 = 0x717bbb;
  local_70 = 0x16;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1a10) != 0) && (*(long *)(param_1 + 0x19f8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x19f8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x19f8) = 0;
  *(undefined8 *)(param_1 + 0x1a00) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1a08) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1a10) = 0;
  if (*(long *)(param_1 + 0x1a18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a18) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1a18) = lVar2;
  *(undefined8 *)(param_1 + 0x1a00) = local_58;
  *(undefined8 *)(param_1 + 0x1a08) = local_50;
  *(long *)(param_1 + 0x1a10) = local_48;
  *(undefined4 *)(param_1 + 0x1a20) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x19f8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x19f8) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x19f8) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x5de78b825b679e26;
  uStack_78 = 0x714e33;
  local_70 = 0x1c;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1a40) != 0) && (*(long *)(param_1 + 0x1a28) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a28) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1a28) = 0;
  *(undefined8 *)(param_1 + 0x1a30) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1a38) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1a40) = 0;
  if (*(long *)(param_1 + 0x1a48) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a48) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1a48) = lVar2;
  *(undefined8 *)(param_1 + 0x1a30) = local_58;
  *(undefined8 *)(param_1 + 0x1a38) = local_50;
  *(long *)(param_1 + 0x1a40) = local_48;
  *(undefined4 *)(param_1 + 0x1a50) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1a28) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a28) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1a28) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xe6c93582a873b44d;
  uStack_78 = 0x7186e7;
  local_70 = 0x1c;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1a70) != 0) && (*(long *)(param_1 + 0x1a58) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a58) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1a58) = 0;
  *(undefined8 *)(param_1 + 0x1a60) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1a68) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1a70) = 0;
  if (*(long *)(param_1 + 0x1a78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a78) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1a78) = lVar2;
  *(undefined8 *)(param_1 + 0x1a60) = local_58;
  *(undefined8 *)(param_1 + 0x1a68) = local_50;
  *(long *)(param_1 + 0x1a70) = local_48;
  *(undefined4 *)(param_1 + 0x1a80) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1a58) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a58) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1a58) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x93a2e5154e550da2;
  uStack_78 = 0x70c25c;
  local_70 = 0x1c;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1aa0) != 0) && (*(long *)(param_1 + 0x1a88) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a88) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1a88) = 0;
  *(undefined8 *)(param_1 + 0x1a90) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1a98) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1aa0) = 0;
  if (*(long *)(param_1 + 0x1aa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1aa8) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1aa8) = lVar2;
  *(undefined8 *)(param_1 + 0x1a90) = local_58;
  *(undefined8 *)(param_1 + 0x1a98) = local_50;
  *(long *)(param_1 + 0x1aa0) = local_48;
  *(undefined4 *)(param_1 + 0x1ab0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1a88) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a88) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1a88) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x1c838f159b5f70c9;
  uStack_78 = 0x713a92;
  local_70 = 0x1c;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1ad0) != 0) && (*(long *)(param_1 + 0x1ab8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1ab8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1ab8) = 0;
  *(undefined8 *)(param_1 + 0x1ac0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1ac8) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1ad0) = 0;
  if (*(long *)(param_1 + 0x1ad8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1ad8) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1ad8) = lVar2;
  *(undefined8 *)(param_1 + 0x1ac0) = local_58;
  *(undefined8 *)(param_1 + 0x1ac8) = local_50;
  *(long *)(param_1 + 0x1ad0) = local_48;
  *(undefined4 *)(param_1 + 0x1ae0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1ab8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1ab8) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1ab8) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x64ec4923ae5f6958;
  uStack_78 = 0x713005;
  local_70 = 0x1a;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1b00) != 0) && (*(long *)(param_1 + 0x1ae8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1ae8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1ae8) = 0;
  *(undefined8 *)(param_1 + 0x1af0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1af8) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1b00) = 0;
  if (*(long *)(param_1 + 0x1b08) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b08) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1b08) = lVar2;
  *(undefined8 *)(param_1 + 0x1af0) = local_58;
  *(undefined8 *)(param_1 + 0x1af8) = local_50;
  *(long *)(param_1 + 0x1b00) = local_48;
  *(undefined4 *)(param_1 + 0x1b10) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1ae8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1ae8) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1ae8) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xdb38a32360a187eb;
  uStack_78 = 0x7191f0;
  local_70 = 0x1a;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1b30) != 0) && (*(long *)(param_1 + 0x1b18) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b18) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1b18) = 0;
  *(undefined8 *)(param_1 + 0x1b20) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1b28) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1b30) = 0;
  if (*(long *)(param_1 + 0x1b38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b38) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1b38) = lVar2;
  *(undefined8 *)(param_1 + 0x1b20) = local_58;
  *(undefined8 *)(param_1 + 0x1b28) = local_50;
  *(long *)(param_1 + 0x1b30) = local_48;
  *(undefined4 *)(param_1 + 0x1b40) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1b18) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b18) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1b18) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x50611574baeae882;
  uStack_78 = 0x71c19f;
  local_70 = 0x1a;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1b60) != 0) && (*(long *)(param_1 + 0x1b48) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b48) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1b48) = 0;
  *(undefined8 *)(param_1 + 0x1b50) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 7000) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1b60) = 0;
  if (*(long *)(param_1 + 0x1b68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b68) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1b68) = lVar2;
  *(undefined8 *)(param_1 + 0x1b50) = local_58;
  *(undefined8 *)(param_1 + 7000) = local_50;
  *(long *)(param_1 + 0x1b60) = local_48;
  *(undefined4 *)(param_1 + 0x1b70) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1b48) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b48) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1b48) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xd941bf7507f54ba9;
  uStack_78 = 0x70d9de;
  local_70 = 0x1a;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1b90) != 0) && (*(long *)(param_1 + 0x1b78) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b78) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1b78) = 0;
  *(undefined8 *)(param_1 + 0x1b80) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1b88) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1b90) = 0;
  if (*(long *)(param_1 + 0x1b98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b98) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1b98) = lVar2;
  *(undefined8 *)(param_1 + 0x1b80) = local_58;
  *(undefined8 *)(param_1 + 0x1b88) = local_50;
  *(long *)(param_1 + 0x1b90) = local_48;
  *(undefined4 *)(param_1 + 0x1ba0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1b78) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1b78) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1b78) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x61e5f39abd55c072;
  uStack_78 = 0x71f094;
  local_70 = 0x1a;
  local_68 = 0;
  FUN__text__0015b030(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1bc0) != 0) && (*(long *)(param_1 + 0x1ba8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1ba8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1ba8) = 0;
  *(undefined8 *)(param_1 + 0x1bb0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1bb8) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1bc0) = 0;
  if (*(long *)(param_1 + 0x1bc8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1bc8) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1bc8) = lVar2;
  *(undefined8 *)(param_1 + 0x1bb0) = local_58;
  *(undefined8 *)(param_1 + 0x1bb8) = local_50;
  *(long *)(param_1 + 0x1bc0) = local_48;
  *(undefined4 *)(param_1 + 0x1bd0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1ba8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1ba8) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1ba8) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xd8fd5d9a7043ad99;
  uStack_78 = 0x71196d;
  local_70 = 0x1a;
  local_68 = 0;
  FUN__text__0015b970(&local_60,&local_80,0xb);
  if ((*(long *)(param_1 + 0x1bf0) != 0) && (*(long *)(param_1 + 0x1bd8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1bd8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1bd8) = 0;
  *(undefined8 *)(param_1 + 0x1be0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1be8) = 0x70f683;
  *(undefined8 *)(param_1 + 0x1bf0) = 0;
  if (*(long *)(param_1 + 0x1bf8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1bf8) + 0x48) + 0x18))();
  }
  lVar2 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x1bf8) = lVar2;
  *(undefined8 *)(param_1 + 0x1be0) = local_58;
  *(undefined8 *)(param_1 + 0x1be8) = local_50;
  *(long *)(param_1 + 0x1bf0) = local_48;
  *(undefined4 *)(param_1 + 0x1c00) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x1bd8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1bd8) + 0x48) + 0x18))();
  }
  uVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1bd8) = uVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  FUN__text__00167b60(param_1);
  do {
    nn::os::SleepThread(&DAT_00989680);
    uVar3 = FUN__text__00167cf8(param_1);
  } while ((uVar3 & 1) == 0);
  return;
}


