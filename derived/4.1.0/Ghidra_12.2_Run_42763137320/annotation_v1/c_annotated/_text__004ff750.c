/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FF750
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ff750; name: FUN_.text__004ff750
 */


bool FUN__text__004ff750(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [32]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_50 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_18 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_14 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004e79f4(local_50,*param_2,(int)param_2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = (*(code *)*local_50[0])(local_50,auStack_14,4,auStack_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((((uVar5 & 1) == 0) || // [自动静态注释] 条件判断/分支
       (uVar5 = (*(code *)*local_50[0])(local_50,param_1 + 0x28,4,auStack_70), (uVar5 & 1) == 0)) || // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (uVar5 = (*(code *)*local_50[0])(local_50,param_1 + 0x2c,4,auStack_70), (uVar5 & 1) == 0)) || // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     ((uVar5 = (*(code *)*local_50[0])(local_50,local_18,1,auStack_70), (uVar5 & 1) == 0 || // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (uVar5 = (*(code *)*local_50[0])(local_50,param_1 + 0x32,2,auStack_70), (uVar5 & 1) == 0)))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(bool *)(param_1 + 0x30) = local_18[0] != '\0';
    lVar6 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__004e7a74(local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = FUN__text__004e7a74(local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004e2bd8(auStack_70,lVar6 + iVar3,(int)lVar1 - iVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar3 = FUN__text__005016f0(param_1,auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    bVar2 = iVar3 == 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004e2bf8(auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004e7a14(local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  return bVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


