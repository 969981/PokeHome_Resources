/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00208DEC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308dec; name: FUN_.text__00308dec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00308dec(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_a0 [6]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [48]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (DAT_008e1540 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005da7f0(auStack_70,DAT_008e1540,param_2,*(undefined8 *)(param_2 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar4 = FUN__text__005dd608(auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar4 - 1U < 2) { // [自动静态注释] 条件判断/分支
    local_a8 = param_2 + 0x19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(byte *)(param_2 + 0x18) & 1) != 0) { // [自动静态注释] 条件判断/分支
      local_a8 = *(long *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__002148dc(local_a0,&local_a8,auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar1 = _DAT_0089f5d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_a0[0] != 0) { // [自动静态注释] 条件判断/分支
      plVar1 = (long *)(local_a0[0] + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar2 = local_a0 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_a0[3] != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar4 = nn::fs::GetEntryType((DirectoryEntryType *)&local_a8,(char *)*plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005daa98(DAT_008e1540,auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    bVar3 = iVar4 == 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((local_a0[3] != 0) && (local_a0[0] != 0)) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    local_a0[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_a0[1] = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_a0[2] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_a0[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_a0[4] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_a0[4] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar3 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (local_40 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return bVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


