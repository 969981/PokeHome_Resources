/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00217C34
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00317c34; name: FUN_.text__00317c34
 */


void FUN__text__00317c34(long param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *__s_00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint3 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint3 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_8c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uStack_84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_7c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __s_00 = (char *)(param_1 + 0x13560a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s = &DAT_009cca20 + param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(__s,0,20000000); // [自动静态注释] 内存复制、清零或移动
  local_6c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *__s_00 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar7 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar8 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0x13560a1) = *(undefined2 *)(param_2 + 6);
  *(char *)(param_1 + 0x13560a3) = cVar7;
  uVar3 = *(uint *)(param_2 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 0x13560a4) = param_2[0xd];
  uVar11 = *(uint3 *)(param_2 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = *(uint3 *)(param_2 + 0x11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0x13560a5) = *(undefined2 *)(param_2 + 0x14);
  uVar4 = *(uint *)(param_2 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar7 = param_2[0x1c]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0x13560a7) = *(undefined2 *)(param_2 + 0x1a);
  *(char *)(param_1 + 0x13560a9) = cVar7;
  bVar9 = param_2[0x1d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined4 *)(param_2 + 0x1e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *(undefined2 *)(param_2 + 0x22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 0x13560ac) = param_2[0x24];
  *(undefined2 *)(param_1 + 0x13560aa) = uVar10;
  cVar7 = param_2[0x2b]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(undefined4 *)(param_2 + 0x25); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0x13560ad) = *(undefined2 *)(param_2 + 0x29);
  *(char *)(param_1 + 0x13560af) = cVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  strncpy((char *)(param_1 + 0x13560b0),param_2 + 0x30,0x989660); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_90 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_8c = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = uVar4 << 0x18 | (uint)uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_84 = uVar3 << 8 | (uint)bVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_7c = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = uVar3 >> 0x18 | (uint)(((ulong)uVar11 << 0x28) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_74 = uVar4 >> 8 | (uint)(((ulong)bVar9 << 0x38) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_70 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar14 = strlen(__s_00); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar13 = FUN__text__003d5a80(&local_68,__s,&DAT_00989680,__s_00,sVar14,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  memset(__s_00,0,10000000); // [自动静态注释] 内存复制、清零或移动
  if (iVar13 == 0) { // [自动静态注释] 条件判断/分支
    nn::crypto::DecryptAes128Cbc(__s_00,10000000,&local_7c,0x10,&local_90,0x10,__s,local_68); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


