/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BD64C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bd64c; name: FUN_.text__006bd64c
 */


void FUN__text__006bd64c(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  uVar2 = *(undefined8 *)(param_2 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)(param_2 + 0x114);
  *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_2 + 0x116);
  *(undefined1 *)(param_1 + 0x117) = *(undefined1 *)(param_2 + 0x117);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  uVar3 = *(undefined4 *)(param_2 + 0x134); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  FUN__text__006bd2f8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_2 + 0x150) != 0) { // [自动静态注释] 条件判断/分支
    bVar1 = *(byte *)(*(long *)(param_2 + 0x150) + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __n = (ulong)bVar1 * 0x10 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar1 < 2) { // [自动静态注释] 条件判断/分支
      __n = 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    __dest = (void *)FUN__text__006a0f04(__n); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(void **)(param_1 + 0x150) = __dest;
    memcpy(__dest,*(void **)(param_2 + 0x150),__n); // [自动静态注释] 内存复制、清零或移动
    *(undefined8 *)(*(long *)(param_1 + 0x150) + 8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


