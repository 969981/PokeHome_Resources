/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F4830
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4830; name: FUN_.text__004f4830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f4830(long param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(int *)(*(long *)(param_1 + 0x128) + 4) + param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar6 + param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar6 < 0) { // [自动静态注释] 条件判断/分支
    if ((int)uVar1 < 1) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = *(int *)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar2 = *(int *)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (iVar2 != 2) { // [自动静态注释] 条件判断/分支
    uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar3 = *(uint *)(*(long *)(param_1 + 0x128) + (ulong)uVar5 * 0x10 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar6 <= uVar3) { // [自动静态注释] 条件判断/分支
        if (uVar1 <= uVar3) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0048dab0(*puVar4,param_2,param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined8 *)(*(long *)(param_1 + 0x128) + (ulong)uVar5 * 0x10 + 8));
      } // [自动静态注释] 作用域/控制流边界
      uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar5 <= iVar2 - 2U); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


