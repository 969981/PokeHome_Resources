/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00346420
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446420; name: FUN_.text__00446420
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00446420(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined3 local_6b; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined3 uStack_67; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar4 = (char *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*pcVar4 == -0x70 && *(char *)(param_1 + 0x2d) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__0044686c(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                        *(long *)(param_1 + 0x18) + 0x18,pcVar4);
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar5 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if ((int)plVar5[1] == 1) { // [自动静态注释] 条件判断/分支
        uVar3 = *(undefined8 *)pcVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_70 = *(undefined4 *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_78._2_6_ = (undefined6)((ulong)uVar3 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_78._0_2_ = CONCAT11(*(undefined1 *)((long)plVar5 + 0x19),(char)uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_78._5_3_ = (undefined3)((ulong)uVar3 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_78._0_5_ = CONCAT14((char)plVar5[3],(int)uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__0044686c(param_1,plVar5[2],*(undefined8 *)(param_1 + 0x20), // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                            *(long *)(param_1 + 0x18) + 0x18,&local_78);
      } // [自动静态注释] 作用域/控制流边界
      plVar5 = (long *)*plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar5 != (long *)0x0); // [自动静态注释] 循环/迭代
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) { // [自动静态注释] 循环/迭代
    if (*(int *)(plVar5 + 1) != 1) { // [自动静态注释] 条件判断/分支
      local_48 = plVar5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar2 = *(long **)(local_48 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        local_78 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_6c = *(undefined1 *)(local_48 + 0x354); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_50 = *(undefined4 *)(param_1 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_70 = CONCAT22(*(undefined2 *)(param_1 + 0x2a), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                            CONCAT11(*(undefined1 *)(local_48 + 0x351), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                     *(undefined1 *)(param_1 + 0x28)));
        local_6b = (undefined3)*(undefined4 *)(param_1 + 0x2d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_68 = (undefined1)*(undefined4 *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_67 = (undefined3)((uint)*(undefined4 *)(param_1 + 0x30) >> 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_60 = *(undefined8 *)(local_48 + 0x360); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_54 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_4c = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_58 = *(undefined4 *)(local_48 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar2 + 0x148))(plVar2,&local_78,local_48 + 0x90,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


