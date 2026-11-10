/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003206D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004206d0; name: FUN_.text__004206d0
 */


void FUN__text__004206d0(undefined8 param_1,long *param_2,ulong param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,long param_6,undefined4 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_30[2] = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = (long)local_30 - ((ulong)(((uint)param_3 & 0xff) * 8 + 0xf) & 0xff0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30[0] = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30[1] = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30[3] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 & 0xff) != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (ulong)*(ushort *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_3 & 0xff) == 1) { // [自动静态注释] 条件判断/分支
      lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar1 = (long *)(lVar2 + lVar5 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar5 = lVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar1 = lVar6;
        plVar1[1] = lVar6 + uVar3 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = lVar6 + uVar3 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while ((param_3 & 0xff) - (param_3 & 1) != lVar5); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      *(ulong *)(lVar2 + lVar5 * 8) = lVar4 + lVar5 * uVar3 * 4;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00420400(local_30 + 3,lVar2,local_30 + 2,local_30 + 1,local_30,param_7,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


