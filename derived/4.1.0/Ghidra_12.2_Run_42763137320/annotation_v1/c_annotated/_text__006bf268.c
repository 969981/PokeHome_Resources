/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BF268
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bf268; name: FUN_.text__006bf268
 */


uint FUN__text__006bf268(long param_1,void *param_2,uint param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0xf0) == 0) || (*(long *)(param_1 + 0xd8) == 0)) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)(param_1 + 0x110) != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = *(ushort *)(param_1 + 0x110) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((param_3 & 0xffff) < uVar1) { // [自动静态注释] 条件判断/分支
    uVar2 = (uVar1 & 0xffff) - (param_3 & 0xffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((int)(param_4 & 0xffff) <= (int)uVar2) { // [自动静态注释] 条件判断/分支
      uVar2 = param_4 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    memcpy((void *)(*(long *)(param_1 + 0xd8) + (ulong)(ushort)param_3),param_2,(long)(int)uVar2); // [自动静态注释] 内存复制、清零或移动
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (**(char **)(param_1 + 0xd8) != '\0') { // [自动静态注释] 条件判断/分支
      uVar1 = uVar2 + param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(short *)(param_1 + 0x112) = (short)uVar1;
    (*(char **)(param_1 + 0xd8))[(ulong)uVar1 & 0xffff] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 4;
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xef;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


