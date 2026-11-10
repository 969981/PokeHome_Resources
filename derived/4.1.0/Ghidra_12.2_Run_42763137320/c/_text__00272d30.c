/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00272d30; name: FUN_.text__00272d30
 */


void FUN__text__00272d30(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  size_t sVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  char *__dest;
  long *plVar12;
  ulong local_110;
  size_t local_108;
  char *local_100;
  undefined8 local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined8 uStack_c8;
  
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__00128db0(param_1,0,1);
  uVar2 = FUN__text__00323120();
  *(undefined4 *)(param_1 + 0x730) = uVar2;
  uVar2 = FUN__text__00323170();
  lVar1 = param_1 + 0x110;
  *(undefined4 *)(param_1 + 0x734) = uVar2;
  lVar4 = FUN__text__0012cbe0(lVar1,0x71e3b1);
  local_f0 = (code *)0x0;
  FUN__text__003a8304(lVar4,&local_f0,1,0);
  lVar5 = FUN__text__0012cb14(lVar1,0x72d030);
  *(undefined1 *)(lVar5 + 0x15a) = 0;
  lVar5 = FUN__text__0012cb14(lVar1,0x72d038);
  *(undefined1 *)(lVar5 + 0x15a) = 0;
  uVar6 = FUN__text__0012cb14(lVar1,0x72d040);
  *(undefined8 *)(param_1 + 0x708) = uVar6;
  uVar6 = FUN__text__0012cb14(lVar1,0x72d048);
  *(undefined8 *)(param_1 + 0x710) = uVar6;
  uVar6 = FUN__text__0012cb14(lVar1,0x72d050);
  *(undefined8 *)(param_1 + 0x718) = uVar6;
  uVar6 = FUN__text__0012cb14(lVar1,0x72d058);
  *(undefined8 *)(param_1 + 0x6d0) = uVar6;
  FUN__text__003a14e8(uVar6,1);
  lVar5 = *(long *)(param_1 + 0x6d0);
  *(undefined8 *)(lVar5 + 0x108) = 0x80000000;
  *(undefined1 *)(lVar5 + 0x110) = 1;
  uVar6 = FUN__text__0012cb14(lVar1,0x72d060);
  *(undefined8 *)(param_1 + 0x6d8) = uVar6;
  FUN__text__003a14e8(uVar6,1);
  lVar5 = *(long *)(param_1 + 0x6d8);
  *(undefined8 *)(lVar5 + 0x108) = 0x20000000;
  *(undefined1 *)(lVar5 + 0x110) = 1;
  local_e0 = FUN__text__0027517c;
  local_d8 = &LAB__text__00275188;
  lVar5 = *(long *)(param_1 + 0x6d0);
  uStack_c8 = 0xffffffff;
  local_f0 = (code *)&LAB__text__00275148;
  local_e8 = FUN__text__00275178;
  pcVar10 = *(code **)(lVar5 + 0x308);
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__002743b0:
    (*local_e0)(&local_d0,lVar5 + 800);
    *(undefined8 *)(lVar5 + 0x300) = local_f0;
    *(code **)(lVar5 + 0x308) = local_e8;
    *(code **)(lVar5 + 0x310) = local_e0;
    *(undefined1 **)(lVar5 + 0x318) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x310) = 0;
    *(undefined8 *)(lVar5 + 0x318) = 0;
    *(undefined8 *)(lVar5 + 0x300) = 0;
    *(undefined8 *)(lVar5 + 0x308) = 0;
    (*pcVar10)(lVar5 + 800);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__002743b0;
  }
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  lVar5 = *(long *)(param_1 + 0x6d0);
  local_f0 = (code *)&LAB__text__00275194;
  local_e8 = FUN__text__002751a4;
  local_d8 = &LAB__text__002751b4;
  pcVar10 = *(code **)(lVar5 + 0x288);
  local_e0 = FUN__text__002751a8;
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__002743dc:
    (*local_e0)(&local_d0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_f0;
    *(code **)(lVar5 + 0x288) = local_e8;
    *(code **)(lVar5 + 0x290) = local_e0;
    *(undefined1 **)(lVar5 + 0x298) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar10)(lVar5 + 0x2a0);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__002743dc;
  }
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  lVar5 = *(long *)(param_1 + 0x6d0);
  local_f0 = FUN__text__002751c0;
  local_e8 = FUN__text__00275238;
  local_e0 = FUN__text__0027523c;
  local_d8 = &LAB__text__00275248;
  pcVar10 = *(code **)(lVar5 + 0x488);
  uStack_c8 = 0;
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00274408:
    (*local_e0)(&local_d0,lVar5 + 0x4a0);
    *(undefined8 *)(lVar5 + 0x480) = local_f0;
    *(code **)(lVar5 + 0x488) = local_e8;
    *(code **)(lVar5 + 0x490) = local_e0;
    *(undefined1 **)(lVar5 + 0x498) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x490) = 0;
    *(undefined8 *)(lVar5 + 0x498) = 0;
    *(undefined8 *)(lVar5 + 0x480) = 0;
    *(undefined8 *)(lVar5 + 0x488) = 0;
    (*pcVar10)(lVar5 + 0x4a0);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__00274408;
  }
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  lVar5 = *(long *)(param_1 + 0x6d8);
  local_e0 = FUN__text__0027517c;
  local_d8 = &LAB__text__00275188;
  uStack_c8 = 1;
  local_f0 = (code *)&LAB__text__00275148;
  local_e8 = FUN__text__00275178;
  pcVar10 = *(code **)(lVar5 + 0x308);
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00273014:
    (*local_e0)(&local_d0,lVar5 + 800);
    *(undefined8 *)(lVar5 + 0x300) = local_f0;
    *(code **)(lVar5 + 0x308) = local_e8;
    *(code **)(lVar5 + 0x310) = local_e0;
    *(undefined1 **)(lVar5 + 0x318) = local_d8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x310) = 0;
    *(undefined8 *)(lVar5 + 0x318) = 0;
    *(undefined8 *)(lVar5 + 0x300) = 0;
    *(undefined8 *)(lVar5 + 0x308) = 0;
    (*pcVar10)(lVar5 + 800);
    if (local_e0 != (code *)0x0) goto LAB__text__00273014;
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  lVar5 = *(long *)(param_1 + 0x6d8);
  local_e0 = FUN__text__002751a8;
  local_f0 = (code *)&LAB__text__00275194;
  local_e8 = FUN__text__002751a4;
  local_d8 = &LAB__text__002751b4;
  pcVar10 = *(code **)(lVar5 + 0x288);
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00274434:
    (*local_e0)(&local_d0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_f0;
    *(code **)(lVar5 + 0x288) = local_e8;
    *(code **)(lVar5 + 0x290) = local_e0;
    *(undefined1 **)(lVar5 + 0x298) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar10)(lVar5 + 0x2a0);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__00274434;
  }
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  lVar5 = *(long *)(param_1 + 0x6d8);
  local_f0 = FUN__text__002751c0;
  local_e8 = FUN__text__00275238;
  pcVar10 = *(code **)(lVar5 + 0x488);
  uStack_c8 = 0;
  local_e0 = FUN__text__0027523c;
  local_d8 = &LAB__text__00275248;
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00274460:
    (*local_e0)(&local_d0,lVar5 + 0x4a0);
    *(undefined8 *)(lVar5 + 0x480) = local_f0;
    *(code **)(lVar5 + 0x488) = local_e8;
    *(code **)(lVar5 + 0x490) = local_e0;
    *(undefined1 **)(lVar5 + 0x498) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x490) = 0;
    *(undefined8 *)(lVar5 + 0x498) = 0;
    *(undefined8 *)(lVar5 + 0x480) = 0;
    *(undefined8 *)(lVar5 + 0x488) = 0;
    (*pcVar10)(lVar5 + 0x4a0);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__00274460;
  }
  local_e8 = pcVar10;
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  uVar6 = FUN__text__0012cb14(lVar1,0x72d068);
  *(undefined8 *)(param_1 + 0x6e0) = uVar6;
  FUN__text__003a14e8(uVar6,1);
  lVar5 = *(long *)(param_1 + 0x6e0);
  uStack_c8 = 0xffffffff;
  local_f0 = FUN__text__00275254;
  local_e8 = FUN__text__002752c8;
  pcVar10 = *(code **)(lVar5 + 0x308);
  local_e0 = FUN__text__002752cc;
  local_d8 = &LAB__text__002752d8;
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__0027448c:
    (*local_e0)(&local_d0,lVar5 + 800);
    *(undefined8 *)(lVar5 + 0x300) = local_f0;
    *(code **)(lVar5 + 0x308) = local_e8;
    *(code **)(lVar5 + 0x310) = local_e0;
    *(undefined1 **)(lVar5 + 0x318) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x310) = 0;
    *(undefined8 *)(lVar5 + 0x318) = 0;
    *(undefined8 *)(lVar5 + 0x300) = 0;
    *(undefined8 *)(lVar5 + 0x308) = 0;
    (*pcVar10)(lVar5 + 800);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__0027448c;
  }
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  lVar5 = *(long *)(param_1 + 0x6e0);
  local_e0 = FUN__text__002751a8;
  local_f0 = (code *)&LAB__text__00275194;
  local_e8 = FUN__text__002751a4;
  local_d8 = &LAB__text__002751b4;
  pcVar10 = *(code **)(lVar5 + 0x288);
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__002744b8:
    (*local_e0)(&local_d0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_f0;
    *(code **)(lVar5 + 0x288) = local_e8;
    *(code **)(lVar5 + 0x290) = local_e0;
    *(undefined1 **)(lVar5 + 0x298) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar10)(lVar5 + 0x2a0);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__002744b8;
  }
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x6e0) + 0x159) = 1;
  lVar5 = *(long *)(param_1 + 0x6e0);
  uStack_c8 = 0x100000000;
  local_f0 = FUN__text__002751c0;
  local_e8 = FUN__text__00275238;
  local_e0 = FUN__text__0027523c;
  local_d8 = &LAB__text__00275248;
  pcVar10 = *(code **)(lVar5 + 0x488);
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__002744e4:
    (*local_e0)(&local_d0,lVar5 + 0x4a0);
    *(undefined8 *)(lVar5 + 0x480) = local_f0;
    *(code **)(lVar5 + 0x488) = local_e8;
    *(code **)(lVar5 + 0x490) = local_e0;
    *(undefined1 **)(lVar5 + 0x498) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x490) = 0;
    *(undefined8 *)(lVar5 + 0x498) = 0;
    *(undefined8 *)(lVar5 + 0x480) = 0;
    *(undefined8 *)(lVar5 + 0x488) = 0;
    (*pcVar10)(lVar5 + 0x4a0);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__002744e4;
  }
  local_e8 = pcVar10;
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  uVar6 = FUN__text__0012cb14(lVar1,0x72d070);
  *(undefined8 *)(param_1 + 0x6e8) = uVar6;
  FUN__text__003a14e8(uVar6,1);
  lVar5 = *(long *)(param_1 + 0x6e8);
  local_f0 = FUN__text__00275254;
  local_e8 = FUN__text__002752c8;
  pcVar10 = *(code **)(lVar5 + 0x308);
  uStack_c8 = 1;
  local_e0 = FUN__text__002752cc;
  local_d8 = &LAB__text__002752d8;
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00274510:
    (*local_e0)(&local_d0,lVar5 + 800);
    *(undefined8 *)(lVar5 + 0x300) = local_f0;
    *(code **)(lVar5 + 0x308) = local_e8;
    *(code **)(lVar5 + 0x310) = local_e0;
    *(undefined1 **)(lVar5 + 0x318) = local_d8;
    pcVar10 = local_e8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x310) = 0;
    *(undefined8 *)(lVar5 + 0x318) = 0;
    *(undefined8 *)(lVar5 + 0x300) = 0;
    *(undefined8 *)(lVar5 + 0x308) = 0;
    (*pcVar10)(lVar5 + 800);
    pcVar10 = local_e8;
    if (local_e0 != (code *)0x0) goto LAB__text__00274510;
  }
  if (pcVar10 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  lVar5 = *(long *)(param_1 + 0x6e8);
  local_e0 = FUN__text__002751a8;
  local_f0 = (code *)&LAB__text__00275194;
  local_e8 = FUN__text__002751a4;
  local_d8 = &LAB__text__002751b4;
  pcVar10 = *(code **)(lVar5 + 0x288);
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00273370:
    (*local_e0)(&local_d0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_f0;
    *(code **)(lVar5 + 0x288) = local_e8;
    *(code **)(lVar5 + 0x290) = local_e0;
    *(undefined1 **)(lVar5 + 0x298) = local_d8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar10)(lVar5 + 0x2a0);
    if (local_e0 != (code *)0x0) goto LAB__text__00273370;
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x6e8) + 0x159) = 1;
  lVar5 = *(long *)(param_1 + 0x6e8);
  uStack_c8 = 0x100000000;
  local_f0 = FUN__text__002751c0;
  local_e8 = FUN__text__00275238;
  local_e0 = FUN__text__0027523c;
  local_d8 = &LAB__text__00275248;
  pcVar10 = *(code **)(lVar5 + 0x488);
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00273408:
    (*local_e0)(&local_d0,lVar5 + 0x4a0);
    *(undefined8 *)(lVar5 + 0x480) = local_f0;
    *(code **)(lVar5 + 0x488) = local_e8;
    *(code **)(lVar5 + 0x490) = local_e0;
    *(undefined1 **)(lVar5 + 0x498) = local_d8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x490) = 0;
    *(undefined8 *)(lVar5 + 0x498) = 0;
    *(undefined8 *)(lVar5 + 0x480) = 0;
    *(undefined8 *)(lVar5 + 0x488) = 0;
    (*pcVar10)(lVar5 + 0x4a0);
    if (local_e0 != (code *)0x0) goto LAB__text__00273408;
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x72d078);
  *(long *)(param_1 + 0x6f0) = lVar5;
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000000000;
  *(undefined1 *)(lVar5 + 0x110) = 0;
  lVar5 = FUN__text__0012cb14(lVar1,0x72d080);
  *(long *)(param_1 + 0x6f8) = lVar5;
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000000000;
  *(undefined1 *)(lVar5 + 0x110) = 0;
  lVar5 = FUN__text__0012cb14(lVar1,0x72d088);
  *(long *)(param_1 + 0x700) = lVar5;
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000;
  *(undefined1 *)(lVar5 + 0x110) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x700);
  FUN__text__005e927c(&local_f0,0x877050);
  FUN__text__003a1de4(uVar6,&local_f0);
  if (local_d8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
  }
  pcVar10 = *(code **)(lVar4 + 0xb8);
  local_e0 = FUN__text__002755f8;
  local_f0 = FUN__text__002752e4;
  local_e8 = FUN__text__002755f4;
  local_d8 = &LAB__text__00275604;
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00273528:
    (*local_e0)(&local_d0,lVar4 + 0xd0);
    *(undefined8 *)(lVar4 + 0xb0) = local_f0;
    *(code **)(lVar4 + 0xb8) = local_e8;
    *(code **)(lVar4 + 0xc0) = local_e0;
    *(undefined1 **)(lVar4 + 200) = local_d8;
  }
  else {
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    (*pcVar10)(lVar4 + 0xd0);
    if (local_e0 != (code *)0x0) goto LAB__text__00273528;
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  local_f0 = (code *)0x431e769ffc1ad350;
  uVar6 = FUN__text__0012ce7c(lVar1,&local_f0);
  FUN__text__003a14e8(uVar6,0);
  FUN__text__001156d0(&local_f0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_f0 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x728) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x728) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x728) = lVar4;
  if (local_f0 != (code *)0x0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x2d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x720) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x720) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x720) = lVar4;
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0xd3d5d6955965fc64;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d090,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0xc63a296f68446f3a;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d098,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x6abdb5a028e653d0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0a0,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x2404027014f8120a;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0a8,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x6657138befa39ca6;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0b0,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x1fe7b8afb5ed75c3;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0b8,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x1b3b3b781028f808;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0c0,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x84de9a90ff88dc9d;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0c8,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0xa2ab1a90e943efe3;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0d0,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  uVar6 = *(undefined8 *)(param_1 + 8);
  nn::account::GetLastOpenedUser((Uid *)&local_110);
  nn::account::GetNickname((Nickname *)&local_f0,(Uid *)&local_110);
  lVar4 = *(long *)(param_1 + 0x2d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar11 = *(undefined8 *)(param_1 + 0x728);
  lVar5 = *(long *)(lVar4 + 0x2e8);
  local_f8 = 0x1a7c63db4fcd3986;
  if (lVar5 == 0) {
    FUN__text__005f2d98(uVar11,&local_f8,0);
    lVar5 = *(long *)(lVar4 + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN__text__005f2d98(uVar11,&local_f8,lVar5);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar5 = *(long *)(lVar4 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__00165dec(lVar5,0,&local_f0);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN__text__003c8c20(lVar4,0x72d0d8,0xb);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  pcVar7 = (char *)FUN__text__00325d00();
  sVar8 = strlen(pcVar7);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00144380(&local_110);
  }
  if (sVar8 < 0x17) {
    local_110 = CONCAT71(local_110._1_7_,(char)((int)sVar8 << 1));
    __dest = (char *)((ulong)&local_110 | 1);
    if (sVar8 == 0) goto LAB__text__00273cac;
  }
  else {
    __dest = operator_new((sVar8 | 0xf) + 1);
    local_110 = (sVar8 | 0xf) + 2;
    local_108 = sVar8;
    local_100 = __dest;
  }
  memmove(__dest,pcVar7,sVar8);
LAB__text__00273cac:
  __dest[sVar8] = '\0';
  sVar8 = local_110 >> 1 & 0x7f;
  if ((local_110 & 1) != 0) {
    sVar8 = local_108;
  }
  if (sVar8 == 0x10) {
    std::string::insert((ulong)&local_110,(char *)0x4);
    std::string::insert((ulong)&local_110,(char *)0x9);
    std::string::insert((ulong)&local_110,(char *)0xe);
  }
  local_f8 = CONCAT44(local_f8._4_4_,0x40);
  FUN__text__00111970(&local_f0,uVar6,&local_f8);
  if (*(long *)(param_1 + 0x640) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x640) + 0x48) + 0x18))();
  }
  *(code **)(param_1 + 0x640) = local_f0;
  pcVar7 = (char *)((ulong)&local_110 | 1);
  if ((local_110 & 1) != 0) {
    pcVar7 = local_100;
  }
  sVar8 = strlen(pcVar7);
  FUN__text__005f3c10(&local_f0,0x20,pcVar7,sVar8);
  FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x640),&local_f0);
  uVar6 = FUN__text__005f3244(*(undefined8 *)(param_1 + 0x640));
  FUN__text__0012c9f0(lVar1,0x72d0e0,uVar6,0xb);
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  uVar9 = FUN__text__00322c10();
  lVar4 = *(long *)(param_1 + 0x728);
  if ((uVar9 & 1) == 0) {
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_f0 = (code *)0x84d10290ff7d4ff9;
    lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  else {
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_f0 = (code *)0x84d48890ff806982;
    lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0e8,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  iVar3 = FUN__text__003230b0();
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = *(code **)((long)iVar3 * 8 + 0x72d0f8);
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d0f0,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72d150);
  iVar3 = FUN__text__00327730();
  if (iVar3 != 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    lVar5 = *(long *)(param_1 + 0x560);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN__text__003c6808(lVar5,iVar3,lVar4,0,0);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x728);
  local_f0 = (code *)0xc636a36f684155b1;
  lVar4 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e8);
  if (lVar4 == 0) {
    FUN__text__005f2d98(uVar6,&local_f0,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN__text__005f2d98(uVar6,&local_f0,lVar4);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar4 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar4,0,*(undefined4 *)(param_1 + 0x730),1,0,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(*(undefined8 *)(param_1 + 0x720),0x72d158,0xb);
  uVar6 = *(undefined8 *)(param_1 + 0x728);
  local_f0 = (code *)0x6ac7c7a028eec6eb;
  lVar4 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e8);
  if (lVar4 == 0) {
    FUN__text__005f2d98(uVar6,&local_f0,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN__text__005f2d98(uVar6,&local_f0,lVar4);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar4 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar4,0,*(undefined4 *)(param_1 + 0x734),1,0,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(*(undefined8 *)(param_1 + 0x720),0x72d160,0xb);
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0xa01fce44cb875827;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d168,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x209216686a600e8;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d170,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x20c276686a840f1;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d178,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x728);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = (code *)0x20c266686a83f3e;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_f0,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x72d180,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  uVar6 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72d188);
  uVar11 = *(undefined8 *)(param_1 + 0x598);
  FUN__text__003cf230(uVar11,*(undefined8 *)(param_1 + 8),uVar6,0);
  nn::account::GetLastOpenedUser((Uid *)&local_f0);
  FUN__text__003cf3b0(uVar11,local_f0,local_e8);
  return;
}


