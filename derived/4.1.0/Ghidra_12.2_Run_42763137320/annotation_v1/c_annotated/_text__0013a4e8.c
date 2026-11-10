/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0003A4E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a4e8; name: FUN_.text__0013a4e8
 */


void FUN__text__0013a4e8(long param_1,uint param_2,byte param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = (ulong)(param_2 << 2) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = 0x721e58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x64c) != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = 0x722118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar2 + lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_3 != 0;
  lVar2 = 0x721e58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x64c) != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = 0x722118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar2 + lVar1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | 1 < param_3;
  lVar2 = 0x721e58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x64c) != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = 0x722118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar2 + lVar1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | 2 < param_3;
  lVar2 = 0x721e58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x64c) != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = 0x722118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar2 + lVar1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | 3 < param_3;
  lVar2 = 0x7222f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x64c) != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = 0x722630; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0013b640(*(undefined8 *)(param_1 + 0x2d0),lVar2 + (ulong)param_2 * 8); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006c6e4c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


