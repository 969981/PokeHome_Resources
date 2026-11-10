/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005CB840
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cb840; name: FUN_.text__006cb840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006cb840(long *param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  lVar1 = _DAT_008a6ad0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1;
  param_1[1] = 0x3f80000000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0x3dcccccd;
  uVar2 = (ulong)*(uint *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_2 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    puVar3 = (ushort *)(*(long *)(param_2 + 0x20) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if ((((1 < puVar3[-0x18]) || (1 < puVar3[-0x10])) || (1 < puVar3[-8])) || // [自动静态注释] 条件判断/分支
         (((1 < *puVar3 || (1 < puVar3[8])) || (1 < puVar3[0x10])))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined1 *)((long)param_1 + 0x14) = 1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = puVar3 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar2 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


