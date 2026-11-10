/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F5918
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5918; name: FUN_.text__005f5918
 */


void FUN__text__005f5918(ulong *param_1,ulong param_2,uint param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)((long)param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0xd) = 0x300;
  bVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    bVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  bVar4 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    bVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)((long)param_1 + 0x1f) = 0;
  lVar1 = param_2 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = param_2;
  *(byte *)((long)param_1 + 0xc) = bVar4 | bVar3;
  lVar2 = param_2 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 < 0x11) { // [自动静态注释] 条件判断/分支
    lVar1 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long *)((long)param_1 + lVar1) = lVar2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


