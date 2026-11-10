/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B5AD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b5ad0; name: FUN_.text__006b5ad0
 */


void FUN__text__006b5ad0(long param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_4 == 0) { // [自动静态注释] 条件判断/分支
    if (param_5 == 0) { // [自动静态注释] 条件判断/分支
      iVar1 = *(int *)(param_1 + 0x220); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__006b5b60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = 0x48535244; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_18 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = FUN__text__006a4248(param_3,param_2,0x48535244,1,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0x218) = lVar3;
    puVar4 = &local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = 0x4b53414d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_14 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = FUN__text__006a4248(param_3,param_2,0x4b53414d,1,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0x218) = lVar3;
    puVar4 = &local_14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(lVar3 + 0x38),uVar5,1,puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(int *)(param_1 + 0x220) = iVar1;
LAB__text__006b5b60: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar3 = *(long *)(*(long *)(param_1 + 0x218) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(lVar3 + (long)(iVar2 * iVar1) * 4);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


