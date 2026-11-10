/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D38C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d38c0; name: FUN_.text__006d38c0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__006d38c0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long param_6,int param_7,int param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (piVar1 != (int *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (*piVar1 == 0x50434756) { // [自动静态注释] 条件判断/分支
        lVar2 = FUN__text__006d3aa0(param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (lVar2 + 0xe0 != 0) { // [自动静态注释] 条件判断/分支
          param_1[0x21] = lVar2 + 0xe0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar2 = FUN__text__006a0f04(); // [自动静态注释] 调用尚未恢复正式名称的函数
          param_1[0x20] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          param_1[0x22] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      piVar1 = (int *)nn::util::BinaryBlockHeader::GetNextBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (piVar1 != (int *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = param_6;
  if (param_7 < 1) { // [自动静态注释] 条件判断/分支
    *(int *)(param_1 + 2) = (int)*(float *)(param_6 + 0x20);
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)(param_1 + 2) = param_7;
  } // [自动静态注释] 作用域/控制流边界
  if (param_8 < 1) { // [自动静态注释] 条件判断/分支
    *(int *)((long)param_1 + 0x14) = (int)*(float *)(param_6 + 0x24);
    piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)((long)param_1 + 0x14) = param_8;
    piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (piVar1 != (int *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (*piVar1 == 0x50434756) { // [自动静态注释] 条件判断/分支
        plVar4 = (long *)param_1[0x22]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[0x22] = (long)(plVar4 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          FUN__text__006ced00(plVar4,0,0,param_1 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        param_1[1] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar4 + 0x10)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (plVar4,param_3,param_4,(int)param_1[2],*(undefined4 *)((long)param_1 + 0x14)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = FUN__text__006d35c0(param_1,param_3,param_4,param_1[1],piVar1,(int)param_1[2], // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined4 *)((long)param_1 + 0x14));
        if (param_2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          *param_2 = *param_2 + lVar2;
        } // [自动静态注释] 作用域/控制流边界
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      piVar1 = (int *)nn::util::BinaryBlockHeader::GetNextBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (piVar1 != (int *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  local_44 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (**(code **)(*param_5 + 0x90))(param_5,param_3,0x52475456,1,&local_44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006cddd0(param_1 + 4,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


