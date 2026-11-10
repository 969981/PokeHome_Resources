/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F65A0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f65a0; name: FUN_.text__005f65a0
 */


void FUN__text__005f65a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_150 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 auStack_148 [31]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pbVar4 = local_150; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __n = lVar3 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memcpy(local_150,*(void **)(param_2 + 0x10),__n); // [自动静态注释] 内存复制、清零或移动
  *param_1 = param_3;
  param_1[1] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_150 + __n) = param_3;
  *(undefined8 *)((long)auStack_148 + __n) = param_4;
  if (__n != 0xfffffffffffffff0) { // [自动静态注释] 条件判断/分支
    lVar3 = lVar3 * -4 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      bVar2 = *pbVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pbVar1 = pbVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pbVar4 = pbVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = ((uVar5 ^ bVar2) * 0x100000001b3 ^ (ulong)*pbVar1) * 0x100000001b3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar3 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  param_1[2] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


