/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059164C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069164c; name: FUN_.text__0069164c
 */


int FUN__text__0069164c(long param_1,uint param_2,uint param_3,int param_4,undefined2 param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    local_58 = local_58 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00690390(param_1,(long)&local_58 + 4,param_5,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = local_58 >> 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0') && // [自动静态注释] 条件判断/分支
       (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(char *)(param_1 + 0x1bd1) == '\0') { // [自动静态注释] 条件判断/分支
        uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar4 = (**(code **)(param_1 + 0x1bd8))(0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = uVar4 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00691574(param_1,uVar3,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      nn::fontll::ScalableFontEngine::SetScale // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
        fVar6 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar3 * 0x1c + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerningFirst // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),(uint)lVar5 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           ,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__006918ac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return (int)(fVar6 * (float)iVar2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    local_58 = local_58 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00690390(param_1,(long)&local_58 + 4,param_5,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = local_58 >> 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0') && // [自动静态注释] 条件判断/分支
       (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(char *)(param_1 + 0x1bd1) == '\0') { // [自动静态注释] 条件判断/分支
        uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar4 = (**(code **)(param_1 + 0x1bd8))(0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = uVar4 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00691574(param_1,uVar3,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      nn::fontll::ScalableFontEngine::SetScale // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
        fVar6 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar3 * 0x1c + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerningLast // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),(uint)lVar5 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           ,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        goto LAB__text__006918ac; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00690390(param_1,(long)&local_58 + 4,param_5,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((uVar3 & 1) != 0) && // [自动静态注释] 条件判断/分支
       (uVar3 = FUN__text__00690390(param_1,&local_58,param_5,param_3), (uVar3 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar1 = local_58._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = (ulong)local_58._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((local_58._4_4_ == (uint)local_58) && // [自动静态注释] 条件判断/分支
         ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0' && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(char *)(param_1 + 0x1bd1) == '\0') { // [自动静态注释] 条件判断/分支
          uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = (**(code **)(param_1 + 0x1bd8))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = uVar4 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00691574(param_1,uVar1,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        nn::fontll::ScalableFontEngine::SetScale // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((lVar5 != 0) && // [自动静态注释] 条件判断/分支
           (iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerning // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                               (uint)lVar5,param_2,param_3), iVar2 != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + (ulong)uVar1 * 0x1c + 0x10) * // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                      (float)iVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        iVar2 = nn::fontll::ScalableFontEngine::GetKerning // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((int *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           (int *)((long)&local_68 + 4),(uint)&local_68,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
          return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + (ulong)uVar1 * 0x1c + 0x10) * // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                      (float)local_68._4_4_) >> 0x10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


