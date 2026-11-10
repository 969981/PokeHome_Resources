/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A5970
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a5970; name: FUN_.text__003a5970
 */


void FUN__text__003a5970(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = 0x882780;
  puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  lVar4 = *(long *)(param_1 + 0x260); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(param_1 + 0x260) = puVar1;
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003a6efc(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(**(long **)(param_1 + 0x268) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x268),lVar4,*(undefined8 *)(param_1 + 0x270), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x278));
    puVar1 = *(undefined8 **)(param_1 + 0x260); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x270) = 0x60;
  *(undefined8 *)(param_1 + 0x278) = 8;
  uStack_34 = *(undefined4 *)(param_1 + 0x290); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(param_1 + 0x268) = plVar3;
  local_38 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003b56b4(puVar1,&local_38,*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (0 < *(int *)(param_1 + 0x290)) { // [自动静态注释] 条件判断/分支
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (undefined8 *)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__003b5bac(*(undefined8 *)(param_1 + 0x260),uVar2 & 0xffffffff,*puVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = puVar1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x290)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(*(long *)(param_1 + 0x260) + 0x18) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


