/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0048FB7C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058fb7c; name: FUN_.text__0058fb7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0058fb7c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0xd4) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x60) = 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    __dest = (void *)FUN__text__00400f80(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(void **)(param_1 + 0xf8) = __dest;
    if (__dest == (void *)0x0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x60) = 1;
    if (*(uint *)(param_1 + 0xd4) != 0) { // [自动静态注释] 条件判断/分支
      memcpy(__dest,*(void **)(param_1 + 0x108),(ulong)*(uint *)(param_1 + 0xd4)); // [自动静态注释] 内存复制、清零或移动
      *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 0xd4);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = *(ushort **)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = puVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = (uint)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(param_1 + 0x108) = (long)puVar3 + (ulong)*puVar3 + 2;
  lVar2 = FUN__text__0058e320(_DAT_008a3eb8,param_1 + 0x58,&local_38,&local_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x80) = lVar2;
  if ((lVar2 == 0) || // [自动静态注释] 条件判断/分支
     (iVar1 = FUN__text__00585d90(param_1 + 0x68,*(undefined1 *)(param_1 + 0xb8)), iVar1 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x60) = 3;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


