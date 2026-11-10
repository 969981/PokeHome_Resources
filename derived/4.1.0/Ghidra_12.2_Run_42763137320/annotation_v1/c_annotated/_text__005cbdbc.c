/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CBDBC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cbdbc; name: FUN_.text__005cbdbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cbdbc(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = param_2 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005a7b0c(param_1,lVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = 0x896788;
  param_1[9] = 0x8967e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = 0x896820; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x2f0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0xb8))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e217c(lVar2,lVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x2f0;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  FUN__text__005e706c(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar4 = (long *)(lVar2 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar4 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  pcVar3 = *(code **)(lVar2 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar2 + 0x280) = 0;
    *(undefined8 *)(lVar2 + 0x288) = 0;
    *(undefined8 *)(lVar2 + 0x270) = 0;
    *(undefined8 *)(lVar2 + 0x278) = 0;
    (*pcVar3)(lVar2 + 0x290); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(lVar2 + 0x290) = param_2;
  *(undefined8 *)(lVar2 + 0x270) = _DAT_008a5900;
  *(undefined **)(lVar2 + 0x278) = &DAT__text__005cc1ec;
  *(undefined1 **)(lVar2 + 0x280) = &LAB__text__005cc1f0;
  *(undefined1 **)(lVar2 + 0x288) = &LAB__text__005cc1fc;
  local_48 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005e733c(param_1,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar4 + 0x18))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


