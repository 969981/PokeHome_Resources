/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00036B34
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00136b34; name: FUN_.text__00136b34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00136b34(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__005f3244(*(undefined8 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                               (*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0012c9f0(lVar1,0x7219f8,uVar4,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar6 = *(char **)(*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) { // [自动静态注释] 条件判断/分支
    pcVar6 = *(char **)(*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18 + -0x10) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) goto LAB__text__00136c50; // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)&DAT_008aa488; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x721a00); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar7 = *(long *)(param_1 + 0x590); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__003d0ed4(lVar7,pcVar6,uVar4,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pcVar6 = *(char **)(*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18 + -0x10) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (undefined8 *)&DAT_008aa480; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) goto LAB__text__00136c50; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0012c300(lVar1,*puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__00136c50: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  iVar3 = *(int *)(param_1 + 0x6e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(*(long *)(param_1 + 0x6d0) + (long)iVar3 * 0x18 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((iVar3 == 0) || // [自动静态注释] 条件判断/分支
     (*(uint *)(*(long *)(param_1 + 0x6d0) + (long)(iVar3 + -1) * 0x18 + 0x10) != uVar2)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0012c300(lVar1,*(undefined8 *)(_DAT_0089fb68 + (ulong)uVar2 * 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


